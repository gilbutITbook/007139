#include <stdio.h>

int main(void)
{
	int age = 9; // 15, 19, 25
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
	{
		printf("청소년이 아닙니다.\n");
	}

	return 0;
}          
