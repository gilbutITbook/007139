#include <stdio.h>

// �Լ� ����
int function_with_return();
void p(int num);

int main(void)
{   
    int ret;
    ret = function_with_return(); // ��ȯ���� �ִ� �Լ� ȣ��
    // int ret = function_with_return();       
    p(ret);
    return 0;
}

// �Լ� ����
int function_with_return()
{
    printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
    return 10;
}

void p(int num)
{
    printf("num�� %d�Դϴ�.\n", num);
}
