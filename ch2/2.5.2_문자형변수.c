#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str));
	// scanf_s("%s", str, (unsigned int) sizeof(str)); // ����ȯ
	// �Ǵ�
	// scanf_s("%s", str, 256); // ������ ���� ũ�� ���� �Է�
	printf("%s\n", str);

	return 0;
}
