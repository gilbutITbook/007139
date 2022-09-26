#include <stdio.h>

int main(void)
{
	// 6.2
	// 
	// 6.2.1 
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다.\n", subway_3);

	// 6.2.2
	int subway_array[3];
	subway_array[0] = 30; // [30][  ][  ]
	subway_array[1] = 40; // [30][40][  ]
	subway_array[2] = 50; // [30][40][50]

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
	}

	// 6.3
	// 
	// 6.3.1
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 배열 초기화
	// int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	// 6.3.2
	int arr[10] = { 1, 2 }; // 일부 값 초기화

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
	char kor[] = "나도코딩";
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
		printf("%c\n", c_array[i]); // 아스키코드로 출력 시 %c를 %d로 수정
	}

	// 6.5.2
	char name[256];
	printf("이름이 뭐예요? ");
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

	// 아스키코드 값 0~127에 해당하는 문자 확인
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 값 %d : %c\n", i, i);
	}

	return 0;
}
