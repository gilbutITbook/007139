#include <stdio.h>

int main(void)
{
	int arr[3] = { 5, 10, 15 };	
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	}

	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("������ ���� ptr[%d]�� �� : %d\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++)
	{
		// printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
		printf("�迭 arr[%d]�� �� : %d\n", i, *(arr + i));
	}
	for (int i = 0; i < 3; i++)
	{
		// printf("������ ���� ptr[%d]�� �� : %d\n", i, ptr[i]);
		printf("������ ���� ptr[%d]�� �� : %d\n", i, *(ptr + i));
	}

	printf("arr ��ü�� �� : %p\n", arr);
	printf("arr[0]�� �ּ� : %p\n", &arr[0]);

	printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr); // arr[0] ->  *(arr + 0) -> *arr
	printf("arr[0]�� ���� �� : %d\n", *&arr[0]);

	return 0;
}          
