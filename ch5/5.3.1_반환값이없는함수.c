#include <stdio.h>

// �Լ� ����
void function_without_return();

int main(void)
{   
    function_without_return(); // ��ȯ���� ���� �Լ� ȣ��
    return 0;
}

// �Լ� ����
void function_without_return()
{
    printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}
