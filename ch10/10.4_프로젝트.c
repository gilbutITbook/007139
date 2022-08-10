#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 10000

int main(void)
{
	char password[20]; // 입력받은 비밀번호 저장
	char c; // 입력받은 비밀번호 확인용(마스킹 효과)
	int i = 0; // password 배열의 인덱스용 변수
	char line[MAX]; // 파일에서 읽어 온 내용 저장
	char contents[MAX] = ""; // 일기장에 입력한 내용 저장(빈 값으로 초기화)

	printf("비밀 일기에 오신 것을 환영합니다.\n");
	printf("비밀번호를 입력하세요(최대 20자리). : ");

	while (1)
	{
		c = _getch();
		if (c == 13) // [Enter] -> 비밀번호 입력 종료
		{
			password[i] = '\0';
			break;
		}
		else // 비밀번호 입력 중
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// 비밀번호: skehzheld(나도코딩)
	printf("\n\n=== 비밀번호 확인 중 ===\n\n");
	if (strcmp(password, "skehzheld") == 0) // 비밀번호가 맞았을 때
	{
		printf("=== 비밀번호 확인 완료 ===\n\n");
		char * fileName = "C:\\Users\사용자계정\\secretdiary.txt";
		// a+ 모드는 파일이 없으면 생성, 파일이 있으면 뒤에서부터 내용 추가
		FILE * file = fopen(fileName, "a+b");
		if (file == NULL)
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL) // 파일 읽어 오기
		{
			printf("%s", line);
		}

		printf("\n\n내용을 계속 작성하세요! 종료하려면 EXIT를 입력하세요.\n\n");

		while (1)
		{
			scanf("%[^\n]", contents); // 줄바꿈 문자(\n) 전까지 읽어 옴(한 문장씩)
			getchar(); // Enter를 입력해 줄바꿈 문자 플러시 처리

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("비밀일기 입력을 종료합니다.\n\n");
				break; // while 문 탈출, 일기 쓰기 종료
			}
			fputs(contents, file);
			fputs("\n", file); // 줄바꿈 문자를 파일에 임의로 추가
		}
		fclose(file); // 파일 닫기
	}
	else // 비밀번호 틀렸을 때
	{
		printf("=== 비밀번호가 틀렸어요. ===\n\n");
	}

	return 0;
}