#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main(void)
{
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
    return 0;
}
