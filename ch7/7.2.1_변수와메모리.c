#include <stdio.h>

int main(void)
{
	int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;

    // 변수의 주소 출력
	printf("철수네 주소 : %p, 암호 : %d\n", &철수, 철수); 
    printf("영희네 주소 : %p, 암호 : %d\n", &영희, 영희);
    printf("민수네 주소 : %p, 암호 : %d\n", &민수, 민수);

	return 0;
}          
