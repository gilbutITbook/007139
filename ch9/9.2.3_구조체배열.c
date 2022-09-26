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
		{ "나도게임", 2022, 50, "나도회사" },
		{ "너도게임", 2022, 100, "너도회사" }
	};

	// 구조체 멤버 출력
	printf("\n-- 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameArray[0].name);
	printf("발매 연도 : %d\n", gameArray[0].year);
	printf("게임 가격 : %d\n", gameArray[0].price);
	printf("제작 회사 : %s\n", gameArray[0].company);

	return 0;
}

