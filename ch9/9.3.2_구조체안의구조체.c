#include <stdio.h>

struct GameInfo {
    char * name;
    int year;
    int price;
    char * company;
    struct GameInfo * friendGame; // ����ü ������
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
	
	gameInfo1.friendGame = &gameInfo2;

	printf("-- �ٸ� ��ü�� ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", gameInfo1.friendGame->name);
	printf("�߸� ���� : %d\n", gameInfo1.friendGame->year);
	printf("���� ���� : %d\n", gameInfo1.friendGame->price);
	printf("���� ȸ�� : %s\n", gameInfo1.friendGame->company);

	return 0;
}          
