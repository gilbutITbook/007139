#include <stdio.h>


struct GameInfo {  // ����ü ����
	char* name;    // ����ü ���1
	int year;      // ����ü ���2
	int price;     // ����ü ���3
	char* company; // ����ü ���4
	struct GameInfo* friendGame; // ����ü ������
};

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
} GAME_INFO;

int main(void)
{
	// 9.2
	// 
	// 9.2.1
	char* name = "��������";
	int year = 2022;
	int price = 50;
	char* company = "����ȸ��";

	char* name2 = "�ʵ�����";
	int year2 = 2022;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";


	//9.2.2
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

	// 9.2.3
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

	//9.3
	//
	//9.3.1
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	struct GameInfo* gamePtr; // ����ü ������ ���� ����
	gamePtr = &gameInfo1;

	printf("-- �̼Ǹ��� ���� ��� ���� --\n");
	/*printf("���� �̸� : %s\n", gamePtr.name);
	printf("�߸� ���� : %d\n", gamePtr.year);
	printf("���� ���� : %d\n", gamePtr.price);
	printf("���� ȸ�� : %s\n", gamePtr.company);*/

	printf("���� �̸� : %s\n", (*gamePtr).name);
	printf("�߸� ���� : %d\n", (*gamePtr).year);
	printf("���� ���� : %d\n", (*gamePtr).price);
	printf("���� ȸ�� : %s\n", (*gamePtr).company);

	/*printf("���� �̸� : %s\n", gamePtr->name);
	printf("�߸� ���� : %d\n", gamePtr->year);
	printf("���� ���� : %d\n", gamePtr->price);
	printf("���� ȸ��  : %s\n", gamePtr->company);*/

	// 9.3.2
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

	//9.4
	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ� ����";
	game1.year = 2022;

	GAME_INFO game2;
	game2.name = "�ѱ� ����2";
	game2.year = 2023;

	/*struct GameInformation game3;
	game3.name = "�ѱ� ����3";*/

	// ����ü ��� ���
	printf("-- ���� ��� ���� --\n");
	printf("���� �̸� : %s\n", game1.name);
	printf("�߸� ���� : %d\n", game1.year);
	printf("���� �̸� : %s\n", game2.name);
	printf("�߸� ���� : %d\n", game2.year);

	return 0;
}
