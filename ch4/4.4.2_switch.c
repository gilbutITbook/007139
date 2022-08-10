#include <time.h> 
#include <stdlib.h> 
#include <stdio.h>

int main(void)
{
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

	return 0;
}          
