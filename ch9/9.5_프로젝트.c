#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct { // ����� ����ü ����
	char * name; // �̸�
	int age; // ����
	char * character; // Ư¡
	int level; // Ű��� ���̵�(1~5, 5�� �����)
} CAT;

CAT cats[5]; // ū ���ڿ� �ִ� ��ü ����� ���
int collection[5] = { 0, 0, 0, 0, 0 }; // ����̸� ��� ���� ����, ������ ����� ǥ��(������ 1, ������ 0)

// �Լ� ����
void initCats(); 
void printCat(int selected);
int checkCollection(); 

int main(void)
{
	srand(time(NULL)); 

	initCats(); // ����� ���� �ʱ�ȭ �Լ� ȣ��
	while (1)
	{
		printf("�αٵα�~! ��� ������� ���簡 �ɱ��?\nEnter�� ���� Ȯ���ϼ���!");
		getchar(); // Enter �Է¹ޱ�
		int selected = rand() % 5; // ����� �̱�, 0~4 ���� ��ȯ
		printCat(selected); // ���� ����� ���� ��� �Լ� ȣ��
		collection[selected] = 1; // ���� ����̸� ���� ���ڿ� �־��ٰ� ǥ��
		int collectAll = checkCollection(); // ���� ����� Ȯ�� �Լ� ȣ��
		if (collectAll == 1) // ����� 5������ �� ������ ���� �ݺ��� Ż��
		{
			break;
		}
	}

	return 0;
}

void initCats() // ����� ���� �ʱ�ȭ �Լ�
{
	cats[0].name = "������";
	cats[0].age = 5;
	cats[0].character = "�¼���";
	cats[0].level = 1;

	cats[1].name = "�Ϳ��";
	cats[1].age = 3;
	cats[1].character = "��ĥ��";
	cats[1].level = 2;

	cats[2].name = "������";
	cats[2].age = 7;
	cats[2].character = "���� ����";
	cats[2].level = 3;

	cats[3].name = "�����";
	cats[3].age = 2;
	cats[3].character = "�ò�����";
	cats[3].level = 4;

	cats[4].name = "�ų���";
	cats[4].age = 1;
	cats[4].character = "�� �����";
	cats[4].level = 5;
}

void printCat(int selected) // ���� ����� ���� ��� �Լ� 
{
	printf("\n\n=== ����� ���� ������� ���簡 �Ǿ����! ===\n\n");
	printf(" �̸� : %s\n", cats[selected].name);
	printf(" ���� : %d\n", cats[selected].age);
	printf(" Ư¡ : %s\n", cats[selected].character);
	printf(" ���� : ");

	for (int i = 0; i < cats[selected].level; i++) // ������ �� ������� ���
	{
		printf("%s", "��");
	}
	printf("\n\n");
}

int checkCollection() // ���� ����� Ȯ�� �Լ�
{
	int collectAll = 1; // ���ڿ� ��� ����̰� �ִ���  ǥ��, ��� ���� ���·� �ʱ�ȭ

	printf("\n\n=== ������ ����� ����̿���. ===\n\n"); 
	for (int i = 0; i < 5; i++) // ���� ����ŭ �ݺ�
	{
		if (collection[i] == 0) // ����� ����
		{
			printf("%10s", "(�� ����)");
			collectAll = 0; // ����̸� �� ������ ���� ����
		}
		else // ����� ����
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n==================================================\n\n");

	if (collectAll)
	{
		printf("\n\n�����մϴ�! ����� 5������ ��� ��Ҿ��. ������ Ű�� �ּ���.\n\n");
	}

	return collectAll; // ����� 5������ �� ������� 1, �ƴϸ� 0 ��ȯ
}