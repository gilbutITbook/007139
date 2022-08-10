#include <stdio.h>

int main(void) {
    for (int i = 5; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        for (int k = 5; k >= 5 - i; k--) {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
