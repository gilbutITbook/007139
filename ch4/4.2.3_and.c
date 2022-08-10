#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 11;
	int c = 13; // 12 에서 변경
	int d = 13;
	if (a == b || c == d)
	{
		printf("a와 b가 같고 c와 d도 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다릅니다.\n");
	}

	return 0;
}          
