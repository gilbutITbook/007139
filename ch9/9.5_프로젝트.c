#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct { // 고양이 구조체 정의
	char * name; // 이름
	int age; // 나이
	char * character; // 특징
	int level; // 키우기 난이도(1~5, 5가 어려움)
} CAT;

CAT cats[5]; // 큰 상자에 있는 전체 고양이 목록
int collection[5] = { 0, 0, 0, 0, 0 }; // 고양이를 담는 작은 상자, 보유한 고양이 표시(있으면 1, 없으면 0)

// 함수 선언
void initCats(); 
void printCat(int selected);
int checkCollection(); 

int main(void)
{
	srand(time(NULL)); 

	initCats(); // 고양이 정보 초기화 함수 호출
	while (1)
	{
		printf("두근두근~! 어느 고양이의 집사가 될까요?\nEnter를 눌러 확인하세요!");
		getchar(); // Enter 입력받기
		int selected = rand() % 5; // 고양이 뽑기, 0~4 숫자 반환
		printCat(selected); // 뽑은 고양이 정보 출력 함수 호출
		collection[selected] = 1; // 뽑은 고양이를 작은 상자에 넣었다고 표시
		int collectAll = checkCollection(); // 모은 고양이 확인 함수 호출
		if (collectAll == 1) // 고양이 5마리를 다 모으면 무한 반복문 탈출
		{
			break;
		}
	}

	return 0;
}

void initCats() // 고양이 정보 초기화 함수
{
	cats[0].name = "깜냥이";
	cats[0].age = 5;
	cats[0].character = "온순함";
	cats[0].level = 1;

	cats[1].name = "귀요미";
	cats[1].age = 3;
	cats[1].character = "까칠함";
	cats[1].level = 2;

	cats[2].name = "수줍이";
	cats[2].age = 7;
	cats[2].character = "잠이 많음";
	cats[2].level = 3;

	cats[3].name = "까꿍이";
	cats[3].age = 2;
	cats[3].character = "시끄러움";
	cats[3].level = 4;

	cats[4].name = "돼냥이";
	cats[4].age = 1;
	cats[4].character = "늘 배고픔";
	cats[4].level = 5;
}

void printCat(int selected) // 뽑은 고양이 정보 출력 함수 
{
	printf("\n\n=== 당신은 다음 고양이의 집사가 되었어요! ===\n\n");
	printf(" 이름 : %s\n", cats[selected].name);
	printf(" 나이 : %d\n", cats[selected].age);
	printf(" 특징 : %s\n", cats[selected].character);
	printf(" 레벨 : ");

	for (int i = 0; i < cats[selected].level; i++) // 레벨을 별 모양으로 출력
	{
		printf("%s", "★");
	}
	printf("\n\n");
}

int checkCollection() // 모은 고양이 확인 함수
{
	int collectAll = 1; // 상자에 모두 고양이가 있는지  표시, 모두 있음 상태로 초기화

	printf("\n\n=== 보유한 고양이 목록이에요. ===\n\n"); 
	for (int i = 0; i < 5; i++) // 상자 수만큼 반복
	{
		if (collection[i] == 0) // 고양이 없음
		{
			printf("%10s", "(빈 상자)");
			collectAll = 0; // 고양이를 다 모으지 못한 상태
		}
		else // 고양이 있음
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n==================================================\n\n");

	if (collectAll)
	{
		printf("\n\n축하합니다! 고양이 5마리를 모두 모았어요. 열심히 키워 주세요.\n\n");
	}

	return collectAll; // 고양이 5마리를 다 모았으면 1, 아니면 0 반환
}