#include <stdio.h>
#include <time.h> // 헤더 파일 추가
#include <stdlib.h> // 헤더 파일 추가

// 전역변수
int arrayAnimal[4][5]; // 카드 지도 배열(카드 20장)
char * strAnimal[10]; // 동물 이름 배열
int checkAnimal[4][5]; // 카드 뒷면, 앞면 확인 배열

// 함수 선언
void initAnimalArray(); 
void initAnimalName(); 
void shuffleAnimal();
int getEmptyPosition(); 
int conv_pos_x(int x); 
int conv_pos_y(int y);
void printAnimals(); 
void printQuestion();
int foundAllAnimals();

int main(void) {
    srand(time(NULL)); // 난수 초기화
    initAnimalArray(); // 카드 지도 배열 초기화
    initAnimalName(); // 동물 이름 배열 초기화
    shuffleAnimal(); // 카드 섞기
    int failCount = 0; // 총 실패 횟수
    while (1) {
        int select1 = 0; // 사용자가 선택한 첫 번째 번호 저장 
        int select2 = 0; // 사용자가 선택한 두 번째 번호 저장 
        printAnimals(); // 카드 지도 출력 함수 호출
        printQuestion(); // 문제 출력 함수 호출
        printf("\n뒤집을 카드 2장을 고르세요.(예: 12 4) -> "); 
        scanf_s("%d %d", &select1, &select2); // 카드 번호 입력받기
        if (select1 == select2) { // 같은 카드 선택 시 무효 처리
            continue; // 반복문 시작 지점으로 돌아가기
        }
        // 입력받은 카드 번호를 x, y 좌표로 변환
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);
        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);
        // 두 카드가 같은 동물이고 뒷면인 경우
        if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 
                && checkAnimal[secondSelect_x][secondSelect_y] == 0) 
                && (arrayAnimal[firstSelect_x][firstSelect_y] == 
                arrayAnimal[secondSelect_x][secondSelect_y])) { 
            printf("\n\n빙고! %s 발견\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }
        else { // 두 카드가 다른 동물이거나 앞면인 경우
            printf("\n\n땡! 서로 다른 동물 카드거나 이미 뒤집힌 카드입니다.\n");
            printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n");
            failCount++; // 실패 횟수 1 증가
        }
        if (foundAllAnimals() == 1) { // 모든 동물을 찾았는지 여부, 1 : 참, 0 : 거짓
            printf("\n\n축하합니다! 모든 동물을 다 찾았습니다.\n");
            printf("총 %d번 실패했습니다.\n", failCount);
            break;
        }
    }
    return 0;
}

// 카드 지도 배열 초기화 함수 
void initAnimalArray() {  
    for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 5; j++) {
                arrayAnimal[i][j] = -1; // 카드 뒷면 설정
            }
        }
}

// 동물 이름 배열 초기화 함수 
void initAnimalName() { 
    strAnimal[0] = "원숭이";
    strAnimal[1] = "하마";
    strAnimal[2] = "강아지";
    strAnimal[3] = "고양이";
    strAnimal[4] = "돼지";
    strAnimal[5] = "코끼리";
    strAnimal[6] = "기린";
    strAnimal[7] = "낙타";
    strAnimal[8] = "타조";
    strAnimal[9] = "호랑이";
}

// 카드 섞기 함수 
void shuffleAnimal() { 
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 2; j++) { 
            int pos = getEmptyPosition(); // 카드 지도에서 빈 공간 찾기 
            int x = conv_pos_x(pos); // 카드 번호를 x 좌표로 변환
            int y = conv_pos_y(pos); // 카드 번호를 y 좌표로 변환
            arrayAnimal[x][y] = i; // 카드 지도 배열에 동물 번호 저장
        }
    }
}

// 카드 지도에서 빈 공간 찾기 함수
int getEmptyPosition() {
    while (1) {
        int randPos = rand() % 20; // 무작위로 뽑은 카드 번호 반환(0~19)
        int x = conv_pos_x(randPos); // 반환한 카드 번호를 x 좌표로 변환
        int y = conv_pos_y(randPos); // 반환한 카드 번호를 y 좌표로 변환
        if (arrayAnimal[x][y] == -1) { // 해당 위치가 비었는지 확인
            return randPos; // 비었으면 카드 번호 반환
        }
    }
    return 0; // 빈 공간이 하나도 없으면 0 반환
}

// x 좌표 변환 함수 
int conv_pos_x(int x) {
    return x / 5; // x 좌표, 카드 번호를 5로 나눈 몫
}

// y 좌표 변환 함수
int conv_pos_y(int y) { 
    return y % 5; // y 좌표, 카드 번호를 5로 나눈 나머지 
}


// 동물 위치 출력 함수 
void printAnimals() { 
    printf("\n========= 동물 위치를 보여 줍니다. =========\n\n"); 
    for (int i = 0; i < 4; i++) { // arrayAnimal 배열 접근
         for (int j = 0; j < 5; j++) {
            printf("%8s", strAnimal[arrayAnimal[i][j]]); // 카드 지도 좌표로 동물 이름 출력
        }
        printf("\n"); 
    }
    printf("\n===========================================\n"); 
}

// 카드 지도 출력 함수 
void printQuestion() { 
    printf("\n(문제)\n\n"); 
    int seq = 0; // 변수 선언 및 초기화
    for (int i = 0; i < 4; i++) { // 카드 지도에 접근
        for (int j = 0; j < 5; j++) {
            if (checkAnimal[i][j] != 0) { // 카드가 앞면이면 
                printf("%8s", strAnimal[arrayAnimal[i][j]]); // 동물 이름 출력
            }
            else { // 카드가 뒷면이면
                printf("%8d", seq); // 카드 번호 출력
            }
            seq++; // 다음 카드를 확인하러 넘어가기
        }
        printf("\n");
    }
}

// 게임 종료 확인 함수 
int foundAllAnimals() { 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (checkAnimal[i][j] == 0) {
                return 0; // 뒤집지 않은 카드가 있음
            }
        }
    }
    return 1; // 모든 카드 뒤집음
}
