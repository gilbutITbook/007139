#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main(void)
{
	char line[MAX];
	FILE* file = fopen("C:\\Users\\����ڰ���\\test1.txt", "rb"); // ���� ��带 rb�� ����
	if (file == NULL)
    {
        printf("���� ���� ����\n");
        return 1;
    }
    while (fgets(line, MAX, file) != NULL) // ���� ������ �о�ͼ� ����ϱ�
   	{
    	printf("%s", line);
    }
    fclose(file);
    return 0;
}
