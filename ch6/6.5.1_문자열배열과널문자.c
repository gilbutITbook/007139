#include <stdio.h>

int main(void)
{
	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	// char c_array[6] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	printf("%s\n", c_array);

	/*char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]); // �ƽ�Ű�ڵ�� ��� �� %c�� %d�� ����
	}*/	
	return 0;
}          
