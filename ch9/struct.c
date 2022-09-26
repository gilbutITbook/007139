#include <stdio.h>


struct GameInfo {  // 구조체 정의
	char* name;    // 구조체 멤버1
	int year;      // 구조체 멤버2
	int price;     // 구조체 멤버3
	char* company; // 구조체 멤버4
	struct GameInfo* friendGame; // 구조체 포인터
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
	char* name = "나도게임";
	int year = 2022;
	int price = 50;
	char* company = "나도회사";

	char* name2 = "너도게임";
	int year2 = 2022;
	int price2 = 100;
	char* company2 = "너도회사";


	//9.2.2
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

	// 9.2.3
	struct GameInfo gameArray[2] = {
	{ "나도게임", 2022, 50, "나도회사" },
	{ "너도게임", 2022, 100, "너도회사" }
	};

	// 구조체 멤버 출력
	printf("\n-- 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameArray[0].name);
	printf("발매 연도 : %d\n", gameArray[0].year);
	printf("게임 가격 : %d\n", gameArray[0].price);
	printf("제작 회사 : %s\n", gameArray[0].company);

	//9.3
	//
	//9.3.1
	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	struct GameInfo* gamePtr; // 구조체 포인터 변수 선언
	gamePtr = &gameInfo1;

	printf("-- 미션맨의 게임 출시 정보 --\n");
	/*printf("게임 이름 : %s\n", gamePtr.name);
	printf("발매 연도 : %d\n", gamePtr.year);
	printf("게임 가격 : %d\n", gamePtr.price);
	printf("제작 회사 : %s\n", gamePtr.company);*/

	printf("게임 이름 : %s\n", (*gamePtr).name);
	printf("발매 연도 : %d\n", (*gamePtr).year);
	printf("게임 가격 : %d\n", (*gamePtr).price);
	printf("제작 회사 : %s\n", (*gamePtr).company);

	/*printf("게임 이름 : %s\n", gamePtr->name);
	printf("발매 연도 : %d\n", gamePtr->year);
	printf("게임 가격 : %d\n", gamePtr->price);
	printf("제작 회사  : %s\n", gamePtr->company);*/

	// 9.3.2
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

	gameInfo1.friendGame = &gameInfo2;

	printf("-- 다른 업체의 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo1.friendGame->name);
	printf("발매 연도 : %d\n", gameInfo1.friendGame->year);
	printf("게임 가격 : %d\n", gameInfo1.friendGame->price);
	printf("제작 회사 : %s\n", gameInfo1.friendGame->company);

	//9.4
	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2022;

	GAME_INFO game2;
	game2.name = "한글 게임2";
	game2.year = 2023;

	/*struct GameInformation game3;
	game3.name = "한글 게임3";*/

	// 구조체 멤버 출력
	printf("-- 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", game1.name);
	printf("발매 연도 : %d\n", game1.year);
	printf("게임 이름 : %s\n", game2.name);
	printf("발매 연도 : %d\n", game2.year);

	return 0;
}
