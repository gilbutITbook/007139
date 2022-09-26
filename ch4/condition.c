#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 

int main(void)
{
	//4.2
	// 
	//4.2.1
	int age = 15; // 25
	if (age >= 20)
	{
		printf("성년입니다.\n");
	}
	else
	{
		printf("청소년입니다.\n");
	}

	// 4.2.2
	int age = 9; // 15, 19, 25
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
	{
		printf("청소년이 아닙니다.\n");
	}

	// 4.2.3 AND 연산자
	int a = 10;
	int b = 11; // 10
	int c = 12; 
	int d = 13; // 12

	if (a == b || c == d)
	{
		printf("a와 b가 같고 c와 d도 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다릅니다.\n");
	}

	// 4.2.3 OR 연산자
	int a = 10;
	int b = 10; // 11
	int c = 12; // 13
	int d = 13;

	if (a == b || c == d)
	{
		printf("a와 b 또는 c와 d의 값이 같습니다.\n");
	}

	// 4.3
	// 
	// 4.3.1
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d번 학생은 조별 발표를 준비하세요.\n", i);
	}

	// 4.3.2
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표를 준비하세요.\n", i);
		}
	}

	// 4.4
	// 
	// 4.4.1
	printf("난수 초기화 이전...\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	//srand((unsigned int) time(NULL)); // 경고 메시지 없애기
	srand(time(NULL)); // 난수 초기화
	printf("\n\n난수 초기화 이후...\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	// 4.4.2
	srand(time(NULL)); // 난수 초기화
	int i = rand() % 3; // 0~2 반환
	/* if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요\n");
	}*/

	// int i = 1;
	switch (i)
	{
	case 0:
		printf("가위\n");
		break;
	case 1:
		printf("바위\n");
		break;
	case 2:
		printf("보\n");
		break;
	default:
		printf("몰라요\n");
		break;
	}

	// 4.4.3
	int age = 9;
	switch (age)
	{
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("초등학생입니다.\n");
		break;
	case 14:
	case 15:
	case 16:
		printf("중학생입니다.\n");
		break;
	case 17:
	case 18:
	case 19:
		printf("고등학생입니다.\n");
		break;
	default:
		printf("청소년이 아닙니다.\n");
	}

	return 0;
}
