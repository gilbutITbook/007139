#include <time.h> 
#include <stdlib.h> 
#include <stdio.h>

int main(void)
{
	srand(time(NULL)); // ���� �ʱ�ȭ
	int i = rand() % 3; // 0~2 ��ȯ
	/* if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("�����\n");
	}*/

	// int i = 1;
	switch (i)
	{
		case 0:
			printf("����\n"); 
			break;
	    case 1:
			printf("����\n"); 
			break;
	    case 2:
			printf("��\n"); 
			break;
	    default:
			printf("�����\n"); 
			break;
	}

	return 0;
}          
