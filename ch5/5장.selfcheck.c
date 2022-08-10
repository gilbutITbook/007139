#include <stdio.h>

void convert_time(int minutes); // 함수 선언

int main(void)
{
	int minutes = 30; // 총 시간(분 단위)
	convert_time(minutes); // 함수 호출
	return 0;

}

void convert_time(int minutes) // 함수 정의
{
	int hour = minutes / 60; // 시간 : 총 시간을 60으로 나눈 값
	int min = minutes % 60; // 분 : 총 시간을 60으로 나눈 나머지
	printf("%d시간 %d분\n", hour, min); // 결과 출력
}