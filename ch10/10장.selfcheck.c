#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[256];  // 단어
	char definition[256]; // 뜻
	char input[256]; // 사용자 입력

	FILE* file = fopen("C:\\Users\\사용자계정\\word.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	for (int i = 0; i < 3; i++)
	{
		(void)fscanf(file, "%s %s", word, definition);
		printf("'%s'(이)라는 뜻을 가진 영어 단어는? ", definition);
		scanf_s("%s", input, (unsigned)sizeof(input));
		if (strcmp(input, word) == 0)
		{
			printf("%s, 정답입니다.\n\n", word);
		}
		else
		{
			printf("틀렸습니다. 정답은 %s입니다.\n\n", word);
		}
	}
	fclose(file);

	return 0;
}