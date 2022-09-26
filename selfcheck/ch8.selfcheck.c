#include <stdio.h>

int main(void) {
	int input = 0; // 사용자 입력을 저장할 변수

	// 다차원 배열을 이용해 상품 목록 정의
	char * items[3][4] =
	{
		{"1.우유", "2.커피", "3.주스", "4.탄산음료"},
		{"5.칸칩", "6.거북칩", "7.감자칩", "8.고구마칩"},
		{"9.안타볼", "10.초코버섯", "11.가재깡", "12.씨리얼"},
	};

	// 전체 상품 목록 출력
	printf("전체 상품 목록입니다.\n");
	printf("===============================================\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%-12s", items[i][j]);
		}
		printf("\n");
	}
	printf("===============================================\n");

	// 사용자 입력 
	printf("몇 번 상품을 구매하시겠습니까?(1~12) : ");
	scanf_s("%d", &input);

	// 상품이 12개이므로 1부터 12까지 입력받기
	if (input < 1 || input > 12)
	{
		printf("\n상품 번호를 잘못 입력했습니다. 프로그램을 종료합니다.\n");
		exit(0); // 프로그램 종료
	}

	input -= 1; // 배열은 0 부터 시작하므로 입력값에서 1 빼기

	int x = input / 4; // 행 인덱스 구하기
	int y = input % 4; // 열 인덱스 구하기

	printf("\n구매하신 상품은 %s입니다.\n", items[x][y]); // 상품 출력
	printf("이용해 주셔서 감사합니다.\n");

	return 0;
}