#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main(void)
{

	//10.2
	//
	//10.2.1
	FILE* file = fopen("C:\\Users\\사용자계정\\test1.txt", "wb");

	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	fputs("fputs() 함수로 글을 써 볼게요.\n", file);
	fputs("잘 써지는지 확인해 주세요.\n", file);
	fclose(file);

	// 10.2.2
	char line[MAX];
	FILE* file = fopen("C:\\Users\\사용자계정\\test1.txt", "rb"); // 파일 모드를 rb로 설정

	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	while (fgets(line, MAX, file) != NULL) // 파일 내용을 읽어와서 출력하기
	{
		printf("%s", line);
	}
	fclose(file);

	// 10.3
	// 
	//10.3.1
	FILE* file = fopen("C:\\Users\\사용자계정\\test2.txt", "wb"); // 파일 생성하고 파일 포인터 얻기
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	// 로또 추첨번호, 보너스번호 저장
	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "보너스번호 ", 7);
	fclose(file);

	// 10.3.2
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
