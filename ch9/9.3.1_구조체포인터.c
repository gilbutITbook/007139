#include <stdio.h>

struct GameInfo {
	char * name;
	int year;
	int price;
	char * company;
};

int main(void)
{
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	struct GameInfo * gamePtr; // ����ü ������ ���� ����
	gamePtr = &gameInfo1;

	printf("-- �̼Ǹ��� ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", (*gamePtr).name);
	printf("�߸� ���� : %d\n", (*gamePtr).year);
	printf("���� ���� : %d\n", (*gamePtr).price);
	printf("���� ȸ�� : %s\n", (*gamePtr).company);
	
	/*printf("���� �̸� : %s\n", gamePtr->name);
	printf("�߸� ���� : %d\n", gamePtr->year);
	printf("���� ���� : %d\n", gamePtr->price);
	printf("���� ȸ��  : %s\n", gamePtr->company);*/

	return 0;
}          
