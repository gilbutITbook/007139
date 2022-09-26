#include <stdio.h>

void square(int* ptr); // 함수 선언

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 배열 선언 및 초기화
	for (int i = 0; i < 10; i++)
	{
		square(&arr[i]); // 함수 호출 : 배열 각 요소의 메모리 주소 전달
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]); // 변경된 배열의 각 요소 출력
		if (i + 1 < 10) // 다음 요소가 남아 있는 경우에만 쉼표(,) 출력
		{
			printf(", ");
		}
	}
	printf("\n");
	return 0;
}

void square(int* ptr) // 함수 정의 : 값이 짝수인 경우 제곱으로 변경
{
	if (*ptr % 2 == 0) // 나머지 연산자로 짝수인지 확인
	{
		// *ptr = *ptr * *ptr;
		// 위와 동일한 문장이지만 가독성을 위해 괄호 처리
		*ptr = (* ptr) * (* ptr); // 메모리 주소 값의 제곱으로 변경
	}
}