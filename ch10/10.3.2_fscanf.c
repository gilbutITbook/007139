//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main(void)
{
	char str1[MAX]; // '��÷��ȣ' ���ڿ� ����
	char str2[MAX]; // '���ʽ���ȣ' ���ڿ� ����
	int num[6] = { 0, 0, 0, 0, 0, 0 }; // ��÷��ȣ ����
	int bonus = 0; // ���ʽ���ȣ ����

	// ���� ����
	FILE* file = fopen("C:\\Users\\����ڰ���\\test2.txt", "rb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	// ���� �б�
	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);
	fclose(file);

	return 0;
}
