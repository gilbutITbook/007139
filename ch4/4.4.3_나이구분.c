#include <stdio.h>

int main(void)
{
	int age = 9; 
	switch (age)
	{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			printf("�ʵ��л��Դϴ�.\n"); 
			break;
		case 14:
		case 15:
		case 16:
			printf("���л��Դϴ�.\n"); 
			break;
		case 17:
		case 18:
		case 19:
			printf("����л��Դϴ�.\n"); 
			break;
		default: 
			printf("û�ҳ��� �ƴմϴ�.\n");
	}

	return 0;
}
