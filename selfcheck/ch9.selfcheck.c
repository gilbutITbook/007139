#include <stdio.h>

struct book {
	int id; // 번호(ID)
	char * title; // 제목
	int available; // 0 : 대출 중, 1 : 대출 가능
};

void print_books(struct book * books); // 함수 선언

int main(void) {
	// 도서 4권 정의, 처음에는 모두 대출 가능한 상태
	struct book books[4] = {
		{1, "C 입문편", 1},
		{2, "파이썬 기본편", 1},
		{3, "자바 기본편", 1},
		{4, "파이썬 중급편", 1}
	};		
	int input; // 사용자 입력을 저장할 변수

	while (1) {
		print_books(books); // 전체 도서 정보 출력 함수 호출
		printf("대출/반납할 책의 번호를 입력하세요.(종료 : -1) : ");
		scanf_s("%d", &input); // 사용자 입력

		if (input == -1) { // -1 을 입력받으면 반복문 탈출 및 프로그램 종료
			printf("프로그램을 종료합니다.\n\n");
			break;
		}

		if (input < 1 || input > 4) // 도서가 4권이므로 1~4 입력받기
		{
			printf("잘못된 입력입니다.\n\n");
			continue;
		}

		input -= 1; // 배열은 0부터 시작하므로 입력값에서 1 빼기

		// 대출 중인 도서인 경우 반납 처리
		if (books[input].available == 0)
		{
			printf("'%s' 반납이 완료됐습니다.\n\n", books[input].title);
			books[input].available = 1;
		}
		// 대출 가능한 도서이면 대출 처리
		else
		{
			printf("'%s' 대출이 완료됐습니다.\n\n", books[input].title);
			books[input].available = 0;
		}
	}
	return 0;
}

// 전체 도서 정보 출력
// books 배열은 구조체 포인터를 통해 처리
void print_books(struct book * books) // 함수 정의
{
	char* available = "대출 가능";
	char* unavailable = "대출 중";
	
	printf("전체 도서 목록입니다.\n");
	printf("===============================\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d. %-16s ", books[i].id, books[i].title); // 도서 번호, 도서 제목 출력
		// 대출 여부 출력
		if (books[i].available) {
			printf("[%s]\n", available);
		}
		else {
			printf("[%s]\n", unavailable);
		}
	}
	printf("===============================\n");
}
