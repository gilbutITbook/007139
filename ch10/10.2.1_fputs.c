#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* file = fopen("C:\\Users\\����ڰ���\\test1.txt", "wb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}
	fputs("fputs() �Լ��� ���� �� ���Կ�.\n", file);
	fputs("�� �������� Ȯ���� �ּ���.\n", file);
	fclose(file);

	return 0;
}
