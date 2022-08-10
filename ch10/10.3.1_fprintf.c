#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE * file = fopen("C:\\Users\\사용자계정\\test2.txt", "wb"); // 파일 생성하고 파일 포인터 얻기
	if (file == NULL) 
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	// 로또 추첨번호, 보너스번호 저장
	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "보너스번호 ", 7);
	fclose(file);

	return 0;
}          
