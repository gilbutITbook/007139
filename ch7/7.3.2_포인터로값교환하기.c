#include <stdio.h>

void swap(int a, int b);
void swap_addr(int * a, int * b); // �Ű������� ������ ������ ����

int main(void)
{
	int a = 10;
	int b = 20;
	printf("a�� �ּ� : %p\n", &a);
	printf("b�� �ּ� : %p\n\n", &b);

	printf("swap() �Լ� ȣ�� �� => a : %d, b : %d\n\n", a, b); // ��ȯ�ϱ� �� ���� �� ���
	swap(a, b); // ���� ���� ȣ��, ���� ����
	printf("swap() �Լ� ȣ�� �� => a : %d, b : %d\n\n", a, b); // ��ȯ�� �� ���� �� ���
 
	printf("swap_addr() �Լ� ȣ�� �� => a : %d, b : %d\n\n", a, b);
	swap_addr(&a, &b);  // ������ ���� ȣ��, �ּҰ� ����
	printf("swap_addr() �Լ� ȣ�� �� => a : %d, b : %d\n\n", a, b);

	return 0;
}          

void swap(int a, int b)
{
	printf("swap() �Լ� �ȿ��� a�� �ּ� : %p\n", &a);
	printf("swap() �Լ� �ȿ��� b�� �ּ� : %p\n", &b);

	int temp = a;
	a = b;
	b = temp;
	printf("swap() �Լ� �� => a : %d, b : %d\n\n", a, b);
}

void swap_addr(int * a, int * b)
{
    printf("swap_addr() �Լ� �ȿ��� a�� �ּ� : %p\n", a);
   	printf("swap_addr() �Լ� �ȿ��� b�� �ּ� : %p\n", b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr() �Լ� �� => a : %d, b : %d\n\n", *a, *b);
}