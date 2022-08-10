//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main(void)
{
	char str1[MAX]; // '추첨번호' 문자열 저장
	char str2[MAX]; // '보너스번호' 문자열 저장
	int num[6] = { 0, 0, 0, 0, 0, 0 }; // 추첨번호 저장
	int bonus = 0; // 보너스번호 저장

	// 파일 열기
	FILE* file = fopen("C:\\Users\\사용자계정\\test2.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	// 파일 읽기
	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);
	fclose(file);

	return 0;
}
