#include <stdio.h>

int main() {
    // 이름
    char name[256];
    printf("이름을 입력하세요 : ");
    scanf_s("%s", name, sizeof(name));

    // 아이디
    char id[256];
    printf("사용할 아이디를 입력하세요 : ");
    scanf_s("%s", id, sizeof(id));

    // 나이
    int age;
    printf("나이를 숫자로 입력하세요 : ");
    scanf_s("%d", &age);

    // 생일
    char birth[256];
    printf("생일을 입력하세요(월일, 예: 0802) : ");
    scanf_s("%s", birth, sizeof(birth));

    // 신발 크기
    int size;
    printf("신발 크기를 입력하세요 : ");
    scanf_s("%d", &size);

    // 회원 정보 출력
    printf("\n\n--- 회원 정보 ---\n\n");
    printf("이름      : %s\n", name);
    printf("아이디    : %s\n", id);
    printf("나이      : %d\n", age);
    printf("생일      : %s\n", birth);
    printf("신발 크기 : %d\n", size);

    return 0;
}
