#include <stdio.h>

// �Լ� ����
void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
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