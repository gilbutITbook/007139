#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++) // ��ĭ ���
		{
			printf(" "); // printf("S");					

		}
		for (int k = 0; k <= i; k++) // ��ǥ ���
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}          
