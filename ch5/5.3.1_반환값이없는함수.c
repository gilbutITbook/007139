#include <stdio.h>

// 함수 선언
void function_without_return();

int main(void)
{   
    function_without_return(); // 반환값이 없는 함수 호출
    return 0;
}

// 함수 정의
void function_without_return()
{
    printf("반환값이 없는 함수입니다.\n");
}
