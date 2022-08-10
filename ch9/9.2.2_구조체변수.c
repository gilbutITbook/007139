#include <stdio.h>

struct GameInfo { // 구조체 정의
	char * name;
	int year;
	int price;
	char * company;
};

int main(void)
{
	struct GameInfo gameInfo1; // 구조체 변수 선언

 	// 구조체 멤버 저장
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

 	// 구조체 멤버 출력
	printf("-- 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo1.name);
	printf("발매 연도 : %d\n", gameInfo1.year);
	printf("게임 가격 : %d\n", gameInfo1.price);
	printf("제작 회사 : %s\n", gameInfo1.company);

 	// 구조체 멤버 저장
	struct GameInfo gameInfo2 = { "너도게임", 2022, 100, "너도회사" };

	// 구조체 멤버 출력
	printf("\n-- 또 다른 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo2.name);
	printf("발매 연도 : %d\n", gameInfo2.year);
	printf("게임 가격 : %d\n", gameInfo2.price);
	printf("제작 회사 : %s\n", gameInfo2.company);

	return 0;
}          
