#include <stdio.h>

// �Լ� ����
int apple(int total, int ate); 

int main(void)
{    
    int ret = apple(5, 2); // �Լ� ȣ��
    printf("��� 5�� �߿��� 2���� ������ %d���� �����ϴ�.\n", ret);
    // printf("��� %d�� �߿��� %d���� ������ %d���� �����ϴ�.\n", 10, 4, apple(10, 4));
    return 0;
}

// �Լ� ����
int apple(int total, int ate)
{
    printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
    return total - ate;
}
