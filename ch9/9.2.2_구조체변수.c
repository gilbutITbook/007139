#include <stdio.h>

struct GameInfo { // ����ü ����
	char * name;
	int year;
	int price;
	char * company;
};

int main(void)
{
	struct GameInfo gameInfo1; // ����ü ���� ����

 	// ����ü ��� ����
	gameInfo1.name = "��������";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

 	// ����ü ��� ���
	printf("-- ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", gameInfo1.name);
	printf("�߸� ���� : %d\n", gameInfo1.year);
	printf("���� ���� : %d\n", gameInfo1.price);
	printf("���� ȸ�� : %s\n", gameInfo1.company);

 	// ����ü ��� ����
	struct GameInfo gameInfo2 = { "�ʵ�����", 2022, 100, "�ʵ�ȸ��" };

	// ����ü ��� ���
	printf("\n-- �� �ٸ� ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", gameInfo2.name);
	printf("�߸� ���� : %d\n", gameInfo2.year);
	printf("���� ���� : %d\n", gameInfo2.price);
	printf("���� ȸ�� : %s\n", gameInfo2.company);

	return 0;
}          
