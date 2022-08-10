#include <stdio.h>

// 함수 선언
void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
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