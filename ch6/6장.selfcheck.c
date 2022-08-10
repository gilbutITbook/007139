#include <stdio.h>

int main(void)
{
	int scores[5] = { 76, 84, 80, 92, 96 }; // 5과목 시험 점수
	int sum = 0; // 총점
	float average = 0.0f; // 평균

	for (int i = 0; i < 5; i++)
	{
		sum += scores[i]; // 총점 계산(반복문으로 모든 시험 점수 더하기)
	}

	average = sum / 5.0f; // 평균 계산	

	printf("총점은 %d점, 평균은 %.1f점입니다.\n", sum, average);
	return 0;
}
