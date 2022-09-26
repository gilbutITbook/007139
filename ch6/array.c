#include <stdio.h>

int main(void)
{
	// 6.2
	// 
	// 6.2.1 
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_3);

	// 6.2.2
	int subway_array[3];
	subway_array[0] = 30; // [30][  ][  ]
	subway_array[1] = 40; // [30][40][  ]
	subway_array[2] = 50; // [30][40][50]

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	}

	// 6.3
	// 
	// 6.3.1
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // �迭 �ʱ�ȭ
	// int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	// 6.3.2
	int arr[10] = { 1, 2 }; // �Ϻ� �� �ʱ�ȭ

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	// 6.3.3
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };

	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}

	//6.4
	// 
	// 6.4.1
	char c = 'A';
	printf("%c\n", c);

	char str[6] = "coding"; // [c][o][d][i][n][g]
	// char str[7] = "coding"; // [c][o][d][i][n][g][\0]
	// char str[] = "coding"; 
	printf("%s\n", str);
	printf("%d\n", sizeof(str)); 

	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}

	// 6.4.2
	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));

	//6.5
	// 
	// 6.5.1
	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	// char c_array[6] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	// char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };

	printf("%s\n", c_array);

	for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]); // �ƽ�Ű�ڵ�� ��� �� %c�� %d�� ����
	}

	// 6.5.2
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);

	// 6.5.3
	printf("%c\n", 'a');
	printf("%d\n", 'a');
	printf("%c\n", 'b');
	printf("%d\n", 'b');
	printf("%c\n", 'A');
	printf("%d\n", 'A');
	printf("%c\n", '\0');
	printf("%d\n", '\0');
	printf("%c\n", '0');
	printf("%d\n", '0');
	printf("%c\n", '1');
	printf("%d\n", '1');

	// �ƽ�Ű�ڵ� �� 0~127�� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ� �� %d : %c\n", i, i);
	}

	return 0;
}
