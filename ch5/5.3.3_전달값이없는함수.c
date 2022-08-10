#include <stdio.h>

// 함수 선언
void function_without_params();

int main(void)
{    
    function_without_params();  // 전달값이 없는 함수 호출
    return 0;
}

// 함수 정의
void function_without_params()
{
    printf("전달값이 없는 함수입니다.\n");
}