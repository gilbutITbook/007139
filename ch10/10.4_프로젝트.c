#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 10000

int main(void)
{
	char password[20]; // �Է¹��� ��й�ȣ ����
	char c; // �Է¹��� ��й�ȣ Ȯ�ο�(����ŷ ȿ��)
	int i = 0; // password �迭�� �ε����� ����
	char line[MAX]; // ���Ͽ��� �о� �� ���� ����
	char contents[MAX] = ""; // �ϱ��忡 �Է��� ���� ����(�� ������ �ʱ�ȭ)

	printf("��� �ϱ⿡ ���� ���� ȯ���մϴ�.\n");
	printf("��й�ȣ�� �Է��ϼ���(�ִ� 20�ڸ�). : ");

	while (1)
	{
		c = _getch();
		if (c == 13) // [Enter] -> ��й�ȣ �Է� ����
		{
			password[i] = '\0';
			break;
		}
		else // ��й�ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// ��й�ȣ: skehzheld(�����ڵ�)
	printf("\n\n=== ��й�ȣ Ȯ�� �� ===\n\n");
	if (strcmp(password, "skehzheld") == 0) // ��й�ȣ�� �¾��� ��
	{
		printf("=== ��й�ȣ Ȯ�� �Ϸ� ===\n\n");
		char * fileName = "C:\\Users\����ڰ���\\secretdiary.txt";
		// a+ ���� ������ ������ ����, ������ ������ �ڿ������� ���� �߰�
		FILE * file = fopen(fileName, "a+b");
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL) // ���� �о� ����
		{
			printf("%s", line);
		}

		printf("\n\n������ ��� �ۼ��ϼ���! �����Ϸ��� EXIT�� �Է��ϼ���.\n\n");

		while (1)
		{
			scanf("%[^\n]", contents); // �ٹٲ� ����(\n) ������ �о� ��(�� ���徿)
			getchar(); // Enter�� �Է��� �ٹٲ� ���� �÷��� ó��

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ� �Է��� �����մϴ�.\n\n");
				break; // while �� Ż��, �ϱ� ���� ����
			}
			fputs(contents, file);
			fputs("\n", file); // �ٹٲ� ���ڸ� ���Ͽ� ���Ƿ� �߰�
		}
		fclose(file); // ���� �ݱ�
	}
	else // ��й�ȣ Ʋ���� ��
	{
		printf("=== ��й�ȣ�� Ʋ�Ⱦ��. ===\n\n");
	}

	return 0;
}