#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���.\n", i);
		}
	}

	return 0;
}          
