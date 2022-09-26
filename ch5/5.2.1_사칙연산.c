#include <stdio.h>

int main(void)
{
	int num = 2;
	printf("num은 %d입니다.\n", num); // 2

	// 2 + 3은?
	num = num + 3; // num += 3; 
	printf("num은 %d입니다.\n", num); // 5

	// 5 -1은?
	num = num - 1; // num -= 1;
	printf("num은 %d입니다.\n", num); // 4

	// 4 × 3은?
	num = num * 3; // num *= 3;
	printf("num은 %d입니다.\n", num); // 12

	// 12 ÷ 6은?
	num = num / 6; // num /= 6; 
	printf("num은 %d입니다.\n", num); // 2

	return 0;
}
