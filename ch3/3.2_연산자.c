#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("a�� %d\n", a);
    //a = a + 1;
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);

	int b = 20;
	printf("b�� %d\n", ++b);
	printf("b�� %d\n", b++);
	printf("b�� %d\n", b);

	return 0;
}          
