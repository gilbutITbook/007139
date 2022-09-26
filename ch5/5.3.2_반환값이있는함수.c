#include <stdio.h>

// 함수 선언
int function_with_return();
void p(int num);

int main(void)
{   
    int ret;
    ret = function_with_return(); // 반환값이 있는 함수 호출
    // int ret = function_with_return();       
    p(ret);
    return 0;
}

// 함수 정의
int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

void p(int num)
{
    printf("num은 %d입니다.\n", num);
}
