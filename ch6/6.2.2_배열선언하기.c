#include <stdio.h>

int main(void)
{
	int subway_array[3]; 
	subway_array[0] = 30; // [30][  ][  ]
	subway_array[1] = 40; // [30][40][  ]
	subway_array[2] = 50; // [30][40][50]

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	}

	return 0;
}          
