#include <stdio.h>

//함수 선언
void swap(int a, int b);
void swap_addr(int* a, int* b); // 매개변수를 포인터 변수로 선언
void changeArray(int* ptr);

int main(void)
{
	// 7.2
	// 
	// 7.2.1
	int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;

	// 변수의 주소 출력
	printf("철수네 주소 : %p, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %p, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %p, 암호 : %d\n", &민수, 민수);

	// 7.2.2
	// 포인터 변수 선언과 값 출력
	int* 미션맨;
	미션맨 = &철수;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &영희;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &민수;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	// 7.2.3
	// 포인터 변수로 바꾼 값 출력
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	// 7.2.4
	int* 미션맨;
	미션맨 = &철수;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	// 포인터 변수를 추가해 값 바꾸기
	printf("\n>> 스파이가 미션을 수행하는 중 <<\n");
	int* 스파이 = 미션맨;
	*스파이 = *스파이 - 1; // 철수 = 철수 - 1;
	printf("스파이가 방문한 곳의 주소 : %p, 암호 : %d\n\n", 스파이, *스파이);

	미션맨 = &영희;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	printf("\n>> 스파이가 미션을 수행하는 중 <<\n");
	스파이 = 미션맨;
	*스파이 = *스파이 - 1; // 영희 = 영희 - ;1
	printf("스파이가 방문한 곳의 주소 : %p, 암호 : %d\n\n", 스파이, *스파이);

	미션맨 = &민수;
	printf("미션맨이 방문한 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	printf("\n>> 스파이가 미션을 수행하는 중 <<\n");
	스파이 = 미션맨;
	*스파이 = *스파이 - 1; // 민수 = 민수 - 1;
	printf("스파이가 방문한 곳의 주소 : %p, 암호 : %d\n\n", 스파이, *스파이);

	printf("\n>> 철수, 영희, 민수가 집에 와서 바뀐 암호를 보고 놀람 <<\n");
	printf("철수네 주소 : %p, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %p, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %p, 암호 : %d\n\n", &민수, 민수);

	// 포인터 변수의 주소 출력
	printf("미션맨의 주소 : %p\n", &미션맨);
	printf("스파이의 주소 : %p\n", &스파이);


	// 7.3
	//
	// 7.3.1
	int arr[3] = { 5, 10, 15 };
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}

	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("포인터 변수 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
		// printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i));
	}
	for (int i = 0; i < 3; i++)
	{
		printf("포인터 변수 ptr[%d]의 값 : %d\n", i, ptr[i]);
		// printf("포인터 변수 ptr[%d]의 값 : %d\n", i, *(ptr + i));
	}

	printf("arr 자체의 값 : %p\n", arr);
	printf("arr[0]의 주소 : %p\n", &arr[0]);

	printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr); // arr[0] ->  *(arr + 0) -> *arr
	printf("arr[0]의 실제 값 : %d\n", *&arr[0]);

	// 7.3.2
	int a = 10;
	int b = 20;
	printf("a의 주소 : %p\n", &a);
	printf("b의 주소 : %p\n\n", &b);

	printf("swap() 함수 호출 전 => a : %d, b : %d\n\n", a, b); // 교환하기 전 변수 값 출력
	swap(a, b); // 값에 의한 호출, 값만 복사
	printf("swap() 함수 호출 후 => a : %d, b : %d\n\n", a, b); // 교환한 후 변수 값 출력

	printf("swap_addr() 함수 호출 전 => a : %d, b : %d\n\n", a, b);
	swap_addr(&a, &b);  // 참조에 의한 호출, 주소값 전달
	printf("swap_addr() 함수 호출 후 => a : %d, b : %d\n\n", a, b

	// 7.3.3
	int arr2[3] = { 10, 20, 30 };
	changeArray(arr2);
	// changeArray(&arr2[0]); // 배열의 시작 주소(첫 번째 요소의 주소) 전달

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}

	return 0;
}

// 함수 정의
void swap(int a, int b)
{
	printf("swap() 함수 안에서 a의 주소 : %p\n", &a);
	printf("swap() 함수 안에서 b의 주소 : %p\n", &b);

	int temp = a;
	a = b;
	b = temp;
	printf("swap() 함수 안 => a : %d, b : %d\n\n", a, b);
}

void swap_addr(int* a, int* b)
{
	printf("swap_addr() 함수 안에서 a의 주소 : %p\n", a);
	printf("swap_addr() 함수 안에서 b의 주소 : %p\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr() 함수 안 => a : %d, b : %d\n\n", *a, *b);
}