#include <stdio.h>

struct GameInfo {   // 구조체 정의
	char * name;    // 구조체 멤버1
	int year;       // 구조체 멤버2
	int price;      // 구조체 멤버3
	char * company; // 구조체 멤버4
};

int main(void)
{
	char* name = "나도게임";
	int year = 2022;
	int price = 50;
	char* company = "나도회사";

	char * name2 = "너도게임";
	int year2 = 2022;
	int price2 = 100;
	char* company2 = "너도회사";

	return 0;
}
