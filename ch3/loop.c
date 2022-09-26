#include <stdio.h>

int main(void)
{
	// 3.2
	int a = 10;
	printf("a는 %d\n", a);
	// a = a + 1;
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);

	int b = 20;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);

	// 3.3
	int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);

	// 3.3.1
	for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}

	// 3.3.2
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
		// i++;
	}

	// 3.3.3
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);

	// 3.4
	for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);
		for (int j = 1; j <= 5; j++)
		{
			printf("    두 번째 반복문 : %d\n", j);
		}
	}

	// 3.4.1 
	for (int i = 2; i <= 9; i++)
	{
		printf("%d단  출력\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

	// 3.4.2
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 3.4.3
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++) // 빈칸 출력
		{
			printf(" "); // printf("S");					

		}
		for (int k = 0; k <= i; k++) // 별표 출력
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
