#include <stdio.h>
#include <time.h> // 헤더 파일 추가
#include <stdlib.h> // 헤더 파일 추가 

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	srand(time(NULL)); // 난수 초기화
	int count = 0; // 맞힌 문제 개수

	for (int i = 1; i <= 5; i++) // 문제 5개
	{
		// 문제 출제 x * y = ?
		int num1 = getRandomNumber(i); // x 
		int num2 = getRandomNumber(i); // y 	
		// printf("%d × %d ?\n", num1, num2); 
		showQuestion(i, num1, num2); // 문제 출력

		int answer = -1;
		scanf_s("%d", &answer); // 답 입력

		if (answer == -1) 
		{
			printf("\n프로그램을 종료합니다.\n");
    		// break;
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			success();
			count++; // 맞힌 문제 개수 증가
		}
		else
		{
			fail();
		}
	}

	printf("\n\n비밀번호 %d개를 맞혔습니다.\n", count);

	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 9) + 1;
}

void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n########## %d번째 비밀번호 ########\n", level);
	printf("\n\t%d × %d ? \n\n", num1, num2);
	printf("##################################\n");
	printf("\n비밀번호를 입력하세요.(종료를 원하면 -1 입력) >> ");
}

void success()
{
	printf("\n >> Good! 정답입니다.\n");
}

void fail()
{
	printf("\n >> 땡! 틀렸습니다.\n");
}