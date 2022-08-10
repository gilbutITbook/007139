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
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	struct GameInfo * gamePtr; // 구조체 포인터 변수 선언
	gamePtr = &gameInfo1;

	printf("-- 미션맨의 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", (*gamePtr).name);
	printf("발매 연도 : %d\n", (*gamePtr).year);
	printf("게임 가격 : %d\n", (*gamePtr).price);
	printf("제작 회사 : %s\n", (*gamePtr).company);
	
	/*printf("게임 이름 : %s\n", gamePtr->name);
	printf("발매 연도 : %d\n", gamePtr->year);
	printf("게임 가격 : %d\n", gamePtr->price);
	printf("제작 회사  : %s\n", gamePtr->company);*/

	return 0;
}          
