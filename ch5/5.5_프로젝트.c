#include <stdio.h>
#include <time.h> // ��� ���� �߰�
#include <stdlib.h> // ��� ���� �߰� 

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	srand(time(NULL)); // ���� �ʱ�ȭ
	int count = 0; // ���� ���� ����

	for (int i = 1; i <= 5; i++) // ���� 5��
	{
		// ���� ���� x * y = ?
		int num1 = getRandomNumber(i); // x 
		int num2 = getRandomNumber(i); // y 	
		// printf("%d �� %d ?\n", num1, num2); 
		showQuestion(i, num1, num2); // ���� ���

		int answer = -1;
		scanf_s("%d", &answer); // �� �Է�

		if (answer == -1) 
		{
			printf("\n���α׷��� �����մϴ�.\n");
    		// break;
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			success();
			count++; // ���� ���� ���� ����
		}
		else
		{
			fail();
		}
	}

	printf("\n\n��й�ȣ %d���� �������ϴ�.\n", count);

	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 9) + 1;
}

void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n########## %d��° ��й�ȣ ########\n", level);
	printf("\n\t%d �� %d ? \n\n", num1, num2);
	printf("##################################\n");
	printf("\n��й�ȣ�� �Է��ϼ���.(���Ḧ ���ϸ� -1 �Է�) >> ");
}

void success()
{
	printf("\n >> Good! �����Դϴ�.\n");
}

void fail()
{
	printf("\n >> ��! Ʋ�Ƚ��ϴ�.\n");
}