#include <stdio.h>

struct GameInfo {
	char * name;
	int year;
	int price;
	char * company;
};

int main(void)
{
	struct GameInfo gameArray[2] = {
		{ "��������", 2022, 50, "����ȸ��" },
		{ "�ʵ�����", 2022, 100, "�ʵ�ȸ��" }
	};

	// ����ü ��� ���
	printf("\n-- ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", gameArray[0].name);
	printf("�߸� ���� : %d\n", gameArray[0].year);
	printf("���� ���� : %d\n", gameArray[0].price);
	printf("���� ȸ�� : %s\n", gameArray[0].company);

	return 0;
}

