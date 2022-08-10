#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++) // ºóÄ­ Ãâ·Â
		{
			printf(" "); // printf("S");					

		}
		for (int k = 0; k <= i; k++) // º°Ç¥ Ãâ·Â
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}          
