#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
};

typedef struct GameInformation {
	char * name;
	int year;
	int price;
	char * company;
	struct GameInfo * friendGame;
} GAME_INFO; 


int main(void)
{
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
