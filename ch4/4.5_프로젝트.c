
#include <time.h> // ��� ���� �߰�
#include <stdlib.h> // ��� ���� �߰�
#include <stdio.h>

int main(void)
{
	srand(time(NULL)); // ���� �ʱ�ȭ
	int num = rand() % 100 + 1; // ���� �����ϱ�(1~100 ���� ��ȯ)
	printf("���� : %d\n", num); // ���� ���
	int answer = 0; // �Է��� ���ڸ� ������ ����
	int chance = 5; // �亯 ��ȸ

	while (1) // chance > 0
	{
		printf("���� ��ȸ %d��\n", chance--); // ��ȸ ����
		printf("���ڸ� ���� ������.(1~100) : ");
		scanf_s("%d", &answer); // ���� �Է¹ޱ�

		if (answer > num) // ���亸�� �Է��� ���ڰ� Ŭ ��
		{
			printf("DOWN ��\n\n");
		}
		else if (answer < num) // ���亸�� �Է��� ���ڰ� ���� ��
		{
			printf("UP ��\n\n");
		}
		else if (answer == num) // ����� �Է��� ���ڰ� ���� �� 
		{
			printf("�����Դϴ�!\n\n");
			break; 
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾��.\n\n");
		}

		if (chance == 0) // 5�� �ȿ� ������ ������ ������ ��
		{
			printf("��� ��ȸ�� ����߾��. �ƽ��Ե� �����߽��ϴ�.\n");
			// printf("���� : %d\n", num);
			break;
		}
	}

	return 0;
}          
