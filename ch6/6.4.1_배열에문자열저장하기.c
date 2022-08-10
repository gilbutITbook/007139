#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c\n", c);

    char str[6] = "coding"; // [c][o][d][i][n][g]
    // char str[7] = "coding"; // [c][o][d][i][n][g][\0]
    // char str[] = "coding"; 
    printf("%s\n", str);  
    // printf("%d\n", sizeof(str)); 

	/*for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}*/

	return 0;
}          
