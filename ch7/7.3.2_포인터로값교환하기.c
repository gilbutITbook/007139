#include <stdio.h>

void swap(int a, int b);
void swap_addr(int * a, int * b); // 매개변수를 포인터 변수로 선언

int main(void)
{
	int a = 10;
	int b = 20;
	printf("a의 주소 : %p\n", &a);
	printf("b의 주소 : %p\n\n", &b);

	printf("swap() 함수 호출 전 => a : %d, b : %d\n\n", a, b); // 교환하기 전 변수 값 출력
	swap(a, b); // 값에 의한 호출, 값만 복사
	printf("swap() 함수 호출 후 => a : %d, b : %d\n\n", a, b); // 교환한 후 변수 값 출력
 
	printf("swap_addr() 함수 호출 전 => a : %d, b : %d\n\n", a, b);
	swap_addr(&a, &b);  // 참조에 의한 호출, 주소값 전달
	printf("swap_addr() 함수 호출 후 => a : %d, b : %d\n\n", a, b);

	return 0;
}          

void swap(int a, int b)
{
	printf("swap() 함수 안에서 a의 주소 : %p\n", &a);
	printf("swap() 함수 안에서 b의 주소 : %p\n", &b);

	int temp = a;
	a = b;
	b = temp;
	printf("swap() 함수 안 => a : %d, b : %d\n\n", a, b);
}

void swap_addr(int * a, int * b)
{
    printf("swap_addr() 함수 안에서 a의 주소 : %p\n", a);
   	printf("swap_addr() 함수 안에서 b의 주소 : %p\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr() 함수 안 => a : %d, b : %d\n\n", *a, *b);
}