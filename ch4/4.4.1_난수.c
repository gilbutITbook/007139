#include <time.h> 
#include <stdlib.h> 
#include <stdio.h>

int main(void)
{
	printf("���� �ʱ�ȭ ����...\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	//srand((unsigned int) time(NULL)); // ��� �޽��� ���ֱ�
	srand(time(NULL)); // ���� �ʱ�ȭ
	printf("\n\n���� �ʱ�ȭ ����...\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	return 0;
}          
