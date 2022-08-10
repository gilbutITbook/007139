#include <stdio.h>

int main(void)
{
	float f = 46.5f;
	printf("%.2f\n", f); // 소수점 이하 셋째 자리에서 반올림
	double d = 4.428;
	printf("%.2lf\n", d); // 소수점 이하 셋째 자리에서 반올림
	return 0;
}