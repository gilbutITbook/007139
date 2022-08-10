#include <stdio.h>

// 함수 선언
int apple(int total, int ate); 

int main(void)
{    
    int ret = apple(5, 2); // 함수 호출
    printf("사과 5개 중에서 2개를 먹으면 %d개가 남습니다.\n", ret);
    // printf("사과 %d개 중에서 %d개를 먹으면 %d개가 남습니다.\n", 10, 4, apple(10, 4));
    return 0;
}

// 함수 정의
int apple(int total, int ate)
{
    printf("전달값과 반환값이 있는 함수입니다.\n");
    return total - ate;
}
