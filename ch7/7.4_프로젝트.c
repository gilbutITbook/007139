#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//�������� ����
int level;
int arrayFish[6];
int * cursor;

// �Լ� ����
void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main(void)
{
	long startTime = 0; // ���� ���� �ð�
	int num; // ���� �� ���� ��ȣ
	long totalElapsedTime = 0; // �� ��� �ð�
	long prevElapsedTime = 0; // ������ ���� �� �ð�(���� �� �ð� ����)

	initData(); // ���� �ʱ�ȭ �Լ� ȣ��

	startTime = clock(); // ���α׷� ���� ���� ������� �帥 �ð� ����
	cursor = arrayFish; // ����Ʈ ������ ���� �迭�� ���� �ּ� �ֱ�
	
	// ���׿� �� �ֱ�
	while (1) 
	{
		printfFishes(); // ���� �� ���� ��� �Լ� ȣ��

		printf("�� �� ���׿� ���� �ٱ��?(1~6) ");  // �Է� �ȳ� ����
		scanf_s("%d", &num); // ���� ��ȣ �Է�
		// �Է°� Ȯ��
		if (num < 1 || num > 6)
		{
			printf("\n�Է°��� �߸��ƽ��ϴ�.\n");
			continue;
		}
		
		// �� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // �ʴ����� ǥ��
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);

		// ���� �� �ð� ����
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);
		decreaseWater(prevElapsedTime); // ������ ���� ����(����)��Ű�� �Լ� ȣ��

		// ����ڰ� �Է��� ��ȣ�� ���׿� �� �ֱ�
		// ���� 1. ������ �� ���̰� 0 ���ϸ� ���� ���� ����
		if (cursor[num - 1] <= 0) 
		{
			printf("%d�� ������ ������ �̹� �׾����Ƿ� ���� ���� �ʽ��ϴ�.\n", num);
		}
		// ���� 2. ������ �� ���̰� 0 �ʰ��ϸ� 100�� ���� �ʴ��� Ȯ���ϰ� ���� ��
		else if (cursor[num - 1] + 1 <= 100) 
		{
			printf("%d�� ���׿� ���� �ݴϴ�\n\n", num);
			// ���� �ָ� �� ���� + 1(cursor[num - 1] = cursor[num - 1] + 1) 
			cursor[num - 1] += 1; 
		}

		// ������ Ȯ��(�������� 20�ʸ��� �� ���� ����)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++; // ������
			printf("*** �����մϴ�. %d�������� %d������ �ö����ϴ�. ***\n\n", level - 1, level);
			if (level == 5) // �ְ� ���� Ȯ�� �� ���� ����
			{
				printf("\n\n�����մϴ�. �ְ� ������ �޼��߽��ϴ�. ������ �����մϴ�.\n\n");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			// ����Ⱑ ��� ����
			printf("��� ����Ⱑ �׾����ϴ�. �Ф� \n\n");
			exit(0);
		}
		else
		{
			// ����Ⱑ �ּ� �� ���� �̻� ��� ����
			printf("����Ⱑ ���� ��� �־��!\n\n");
		}
		prevElapsedTime = totalElapsedTime;

	}
	return 0;
}

// ���� �ʱ�ȭ �Լ�
void initData()
{
	level = 1; // ���� �ʱ�ȭ(���� ���� 1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // ���� �� ���� �ʱ�ȭ(�� ���� ���� 0~100)
	}
}

// ���� �� ���� ��� �Լ�
void printfFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]); // ���� �����ڷ� ��� ��� ����
	}
	printf("\n\n"); // �������� ���� �߰�
}

// ������ ���� ����(����)��Ű�� �Լ�
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // �����ϴ� ���� �� ���, ������ �ð��� ���
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

// ��� ����Ⱑ �׾����� Ȯ���ϴ� �Լ�
int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; // ��
	}
	return 0;
}