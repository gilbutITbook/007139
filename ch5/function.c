#include <stdio.h>

// �Լ� ����
void p(int num);

void function_without_return();
int function_with_return();
void p(int num);
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate);

void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
	// 5.2
	// 
    // 5.2.1
	int num = 2;
	printf("num�� %d�Դϴ�.\n", num); // 2

	// 2 + 3��?
	num = num + 3; // num += 3; 
	printf("num�� %d�Դϴ�.\n", num); // 5

	// 5 -1��?
	num = num - 1; // num -= 1;
 	printf("num�� %d�Դϴ�.\n", num); // 4

	// 4 �� 3��?
	num = num * 3; // num *= 3;
	printf("num�� %d�Դϴ�.\n", num); // 12

	// 12 �� 6��?
	num = num / 6; // num /= 6; 
	printf("num�� %d�Դϴ�.\n", num); // 2

	// 5.2.2
	int num = 2;
	//printf("num�� %d�Դϴ�.\n", num); // 2
	p(num);

	num = num + 3; // num += 3;
	//printf("num�� %d�Դϴ�.\n", num); // 5
	p(num);

	num = num - 1; // num -= 1;
	//printf("num�� %d�Դϴ�.\n", num); // 4
	p(num);

	num = num * 3; // num *= 3;
	//printf("num�� %d�Դϴ�.\n", num); // 12
	p(num);

	num = num / 6; // num /= 6; 
	//printf("num�� %d�Դϴ�.\n", num); // 2
	p(num);

	// 5.3
	// 
	// 5.3.1
	function_without_return(); // ��ȯ���� ���� �Լ� ȣ��

	// 5.3.2 
	int ret;
	ret = function_with_return(); // ��ȯ���� �ִ� �Լ� ȣ��
	// int ret = function_with_return();       
	p(ret);

	// 5.3.3 
	function_without_params();  // ���ް��� ���� �Լ� ȣ��

	// 5.3.4
	function_with_params(1, 2, 3); // // ���ް��� �ִ� �Լ� ȣ��

	// 5.3.5
	int ret = apple(5, 2); // �Լ� ȣ��
	printf("��� 5�� �߿��� 2���� ������ %d���� �����ϴ�.\n", ret);
	// printf("��� %d�� �߿��� %d���� ������ %d���� �����ϴ�.\n", 10, 4, apple(10, 4))

	// 5.4
	int num = 2;
	p(num);
	num = add(num, 3); // ���ϱ� �Լ� ȣ��
	p(num);
	num = sub(num, 1); // ���� �Լ� ȣ��
	p(num);
	num = mul(num, 3); // ���ϱ� �Լ� ȣ��
	p(num);
	num = div(num, 6); // ������ �Լ� ȣ��
	p(num);

	return 0;
}

// �Լ� ����
void p(int num)
{
	printf("num�� %d�Դϴ�.\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void p(int num)
{
	printf("num�� %d�Դϴ�.\n", num);
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̰�, ���ް��� %d, %d, %d�Դϴ�.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}

void p(int num)
{
	printf("num�� %d�Դϴ�.\n", num);
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}