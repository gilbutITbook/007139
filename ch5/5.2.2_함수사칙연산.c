#include <stdio.h>

void p(int num);

int main(void)
{
	int num = 2;
	//printf("num은 %d입니다.\n", num); // 2
	p(num);

	// 2 + 3 은?
	num = num + 3; // num += 3;
	//printf("num은 %d입니다.\n", num); // 5
	p(num);

	// 5 -1 은?
	num -= 1; // num = num - 1;
	//printf("num은 %d입니다.\n", num); // 4
	p(num);

	// 4 x 3 은?
	num *= 3;
	//printf("num은 %d입니다.\n", num); // 12
	p(num);

	// 12 / 6 은?
	num /= 6;
	//printf("num은 %d입니다.\n", num); // 2
	p(num);

	return 0;
}

void p(int num)
{
	printf("num은 %d입니다.\n", num);
}
