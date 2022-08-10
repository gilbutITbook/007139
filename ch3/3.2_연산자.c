#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("a 는 %d\n", a);
    //a = a + 1;
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);

	int b = 20;
	printf("b 는 %d\n", ++b);
	printf("b 는 %d\n", b++);
	printf("b 는 %d\n", b);

	return 0;
}          
