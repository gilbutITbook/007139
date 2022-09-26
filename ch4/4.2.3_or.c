#include <stdio.h>

int main(void) 
{
    int a = 10;
    int b = 10; //11
    int c = 12; //13
    int d = 13;

    if (a == b || c == d) 
    {
        printf("a와 b 또는 c와 d의 값이 같습니다.\n");
    }

    return 0;
}

