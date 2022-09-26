#include <stdio.h>

// 함수 선언
void p(int num);

void function_without_return();
int function_with_return();
void p(int num);
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate);

void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
	// 5.2
	// 
    // 5.2.1
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

	// 5.2.2
	int num = 2;
	//printf("num은 %d입니다.\n", num); // 2
	p(num);

	num = num + 3; // num += 3;
	//printf("num은 %d입니다.\n", num); // 5
	p(num);

	num = num - 1; // num -= 1;
	//printf("num은 %d입니다.\n", num); // 4
	p(num);

	num = num * 3; // num *= 3;
	//printf("num은 %d입니다.\n", num); // 12
	p(num);

	num = num / 6; // num /= 6; 
	//printf("num은 %d입니다.\n", num); // 2
	p(num);

	// 5.3
	// 
	// 5.3.1
	function_without_return(); // 반환값이 없는 함수 호출

	// 5.3.2 
	int ret;
	ret = function_with_return(); // 반환값이 있는 함수 호출
	// int ret = function_with_return();       
	p(ret);

	// 5.3.3 
	function_without_params();  // 전달값이 없는 함수 호출

	// 5.3.4
	function_with_params(1, 2, 3); // // 전달값이 있는 함수 호출

	// 5.3.5
	int ret = apple(5, 2); // 함수 호출
	printf("사과 5개 중에서 2개를 먹으면 %d개가 남습니다.\n", ret);
	// printf("사과 %d개 중에서 %d개를 먹으면 %d개가 남습니다.\n", 10, 4, apple(10, 4))

	// 5.4
	int num = 2;
	p(num);
	num = add(num, 3); // 더하기 함수 호출
	p(num);
	num = sub(num, 1); // 빼기 함수 호출
	p(num);
	num = mul(num, 3); // 곱하기 함수 호출
	p(num);
	num = div(num, 6); // 나누기 함수 호출
	p(num);

	return 0;
}

// 함수 정의
void p(int num)
{
	printf("num은 %d입니다.\n", num);
}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void p(int num)
{
	printf("num은 %d입니다.\n", num);
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이고, 전달값은 %d, %d, %d입니다.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}

void p(int num)
{
	printf("num은 %d입니다.\n", num);
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}