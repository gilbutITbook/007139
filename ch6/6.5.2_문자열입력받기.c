#include <stdio.h>

int main(void)
{   
    char name[256];
    printf("�̸��� ������? ");
    scanf_s("%s", name, sizeof(name));
    printf("%s\n", name);
    return 0;
}
