#include <stdio.h>

// �Լ� ����
void function_with_params(int num1, int num2, int num3);

int main(void)
{

	function_with_params(1, 2, 3); // // ���ް��� �ִ� �Լ� ȣ��
	return 0;
}

// �Լ� ����
void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̰�, ���ް��� %d, %d, %d�Դϴ�.\n", num1, num2, num3);
}
