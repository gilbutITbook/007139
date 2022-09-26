#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("a는 %d\n", a);
    //a = a + 1;
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);

	int b = 20;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);

	return 0;
}          
