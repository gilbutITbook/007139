#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* file = fopen("C:\\Users\\사용자계정\\test1.txt", "wb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	fputs("fputs() 함수로 글을 써 볼게요.\n", file);
	fputs("잘 써지는지 확인해 주세요.\n", file);
	fclose(file);

	return 0;
}
