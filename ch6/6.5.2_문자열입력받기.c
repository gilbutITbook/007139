#include <stdio.h>

int main(void)
{   
    char name[256];
    printf("이름이 뭐예요? ");
    scanf_s("%s", name, sizeof(name));
    printf("%s\n", name);
    return 0;
}
