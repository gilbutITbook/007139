#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//전역변수 선언
int level;
int arrayFish[6];
int * cursor;

// 함수 선언
void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main(void)
{
	long startTime = 0; // 게임 시작 시간
	int num; // 물을 줄 어항 번호
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; // 직전에 물을 준 시간(물을 준 시간 간격)

	initData(); // 게임 초기화 함수 호출

	startTime = clock(); // 프로그램 실행 이후 현재까지 흐른 시간 저장
	cursor = arrayFish; // 포인트 변수에 어항 배열의 시작 주소 넣기
	
	// 어항에 물 주기
	while (1) 
	{
		printfFishes(); // 어항 물 높이 출력 함수 호출

		printf("몇 번 어항에 물을 줄까요?(1~6) ");  // 입력 안내 문구
		scanf_s("%d", &num); // 어항 번호 입력
		// 입력값 확인
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못됐습니다.\n");
			continue;
		}
		
		// 총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // 초단위로 표시
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 물을 준 시간 간격
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);
		decreaseWater(prevElapsedTime); // 어항의 물을 증발(감소)시키는 함수 호출

		// 사용자가 입력한 번호의 어항에 물 주기
		// 조건 1. 어항의 물 높이가 0 이하면 물을 주지 않음
		if (cursor[num - 1] <= 0) 
		{
			printf("%d번 어항의 물고기는 이미 죽었으므로 물을 주지 않습니다.\n", num);
		}
		// 조건 2. 어항의 물 높이가 0 초과하면 100을 넘지 않는지 확인하고 물을 줌
		else if (cursor[num - 1] + 1 <= 100) 
		{
			printf("%d번 어항에 물을 줍니다\n\n", num);
			// 물을 주면 물 높이 + 1(cursor[num - 1] = cursor[num - 1] + 1) 
			cursor[num - 1] += 1; 
		}

		// 레벨업 확인(레벨업은 20초마다 한 번씩 수행)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++; // 레벨업
			printf("*** 축하합니다. %d레벨에서 %d레벨로 올랐습니다. ***\n\n", level - 1, level);
			if (level == 5) // 최고 레벨 확인 후 게임 종료
			{
				printf("\n\n축하합니다. 최고 레벨을 달성했습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			// 물고기가 모두 죽음
			printf("모든 물고기가 죽었습니다. ㅠㅠ \n\n");
			exit(0);
		}
		else
		{
			// 물고기가 최소 한 마리 이상 살아 있음
			printf("물고기가 아직 살아 있어요!\n\n");
		}
		prevElapsedTime = totalElapsedTime;

	}
	return 0;
}

// 게임 초기화 함수
void initData()
{
	level = 1; // 레벨 초기화(레벨 범위 1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항 물 높이 초기화(물 높이 범위 0~100)
	}
}

// 어항 물 높이 출력 함수
void printfFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]); // 서식 지정자로 출력 결과 정렬
	}
	printf("\n\n"); // 가독성을 위해 추가
}

// 어항의 물을 증발(감소)시키는 함수
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 증발하는 물의 양 계산, 레벨과 시간에 비례
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

// 모든 물고기가 죽었는지 확인하는 함수
int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; // 참
	}
	return 0;
}