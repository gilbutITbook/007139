#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE * file = fopen("C:\\Users\\����ڰ���\\test2.txt", "wb"); // ���� �����ϰ� ���� ������ ���
	if (file == NULL) 
	{
		printf("���� ���� ����\n");
		return 1;
	}

	// �ζ� ��÷��ȣ, ���ʽ���ȣ ����
	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "���ʽ���ȣ ", 7);
	fclose(file);

	return 0;
}          
