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
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("û�ҳ��Դϴ�.\n");
	}

	// 4.2.2
	int age = 9; // 15, 19, 25
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�.\n");
	}
	else
	{
		printf("û�ҳ��� �ƴմϴ�.\n");
	}

	// 4.2.3 AND ������
	int a = 10;
	int b = 11; // 10
	int c = 12; 
	int d = 13; // 12

	if (a == b || c == d)
	{
		printf("a�� b�� ���� c�� d�� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��ϴ�.\n");
	}

	// 4.2.3 OR ������
	int a = 10;
	int b = 10; // 11
	int c = 12; // 13
	int d = 13;

	if (a == b || c == d)
	{
		printf("a�� b �Ǵ� c�� d�� ���� �����ϴ�.\n");
	}

	// 4.3
	// 
	// 4.3.1
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������.\n");
			break;
		}
		printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���.\n", i);
	}

	// 4.3.2
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���.\n", i);
		}
	}

	// 4.4
	// 
	// 4.4.1
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

	// 4.4.2
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
		printf("�ʵ��л��Դϴ�.\n");
		break;
	case 14:
	case 15:
	case 16:
		printf("���л��Դϴ�.\n");
		break;
	case 17:
	case 18:
	case 19:
		printf("����л��Դϴ�.\n");
		break;
	default:
		printf("û�ҳ��� �ƴմϴ�.\n");
	}

	return 0;
}
