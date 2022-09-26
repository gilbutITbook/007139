#include <stdio.h>

int main(void)
{
	// 2.2.1 
  	printf("Hello World\n");
  
	// 2.2.2 
	int age = 20;
 	printf("%d\n", age);
	age = 21;
	printf("%d\n", age); 
  
	// 2.2.3 
	// 여러 줄 주석 처리는 /* */
	/* int age = 20;
	printf("%d\n", age);
	age = 21;
	printf("%d\n", age); */

	printf("1\n");
	// printf("2\n"); // 한 줄 주석 처리는 //
	printf("3\n"); 

  	// 2.2.3 
  	float f = 46.5f;
	printf("%.2f\n", f); // 소수점 이하 셋째 자리에서 반올림
	double d = 4.428;
	printf("%.2lf\n", d); // 소수점 이하 셋째 자리에서 반올림

  	// 2.3
	int YEAR = 1972; // 변수 
	const int YEAR = 1972; // 상수
	printf("C 언어가 발표된 연도 : %d\n", YEAR);
	YEAR = 1973;

  	// 2.4
  	int add = 3 + 7; // 10
	printf("3 + 7 = %d\n", add); 
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	printf("%d x %d = %d\n", 30, 79, 30 + 79);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);

  	// 2.5.1
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("정수 3개를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);

  	//2.5.2 
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	// scanf_s("%s", str, (unsigned int) sizeof(str)); // 형변환
	// 또는
	// scanf_s("%s", str, 256); // 문자형 변수 크기 직접 입력
	printf("%s\n", str);

  	return 0;
}