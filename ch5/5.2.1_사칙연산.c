#include <stdio.h>

int main(void)
{
	int num = 2;
	printf("num�� %d�Դϴ�.\n", num); // 2

	// 2 + 3��?
	num = num + 3; // num += 3; 
	printf("num�� %d�Դϴ�.\n", num); // 5

	// 5 -1��?
	num = num - 1; // num -= 1;
	printf("num�� %d�Դϴ�.\n", num); // 4

	// 4 �� 3��?
	num = num * 3; // num *= 3;
	printf("num�� %d�Դϴ�.\n", num); // 12

	// 12 �� 6��?
	num = num / 6; // num /= 6; 
	printf("num�� %d�Դϴ�.\n", num); // 2

	return 0;
}
