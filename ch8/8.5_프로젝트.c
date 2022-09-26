#include <stdio.h>
#include <time.h> // ��� ���� �߰�
#include <stdlib.h> // ��� ���� �߰�

// ��������
int arrayAnimal[4][5]; // ī�� ���� �迭(ī�� 20��)
char * strAnimal[10]; // ���� �̸� �迭
int checkAnimal[4][5]; // ī�� �޸�, �ո� Ȯ�� �迭

// �Լ� ����
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
    srand(time(NULL)); // ���� �ʱ�ȭ
    initAnimalArray(); // ī�� ���� �迭 �ʱ�ȭ
    initAnimalName(); // ���� �̸� �迭 �ʱ�ȭ
    shuffleAnimal(); // ī�� ����
    int failCount = 0; // �� ���� Ƚ��
    while (1) {
        int select1 = 0; // ����ڰ� ������ ù ��° ��ȣ ���� 
        int select2 = 0; // ����ڰ� ������ �� ��° ��ȣ ���� 
        printAnimals(); // ī�� ���� ��� �Լ� ȣ��
        printQuestion(); // ���� ��� �Լ� ȣ��
        printf("\n������ ī�� 2���� ������.(��: 12 4) -> "); 
        scanf_s("%d %d", &select1, &select2); // ī�� ��ȣ �Է¹ޱ�
        if (select1 == select2) { // ���� ī�� ���� �� ��ȿ ó��
            continue; // �ݺ��� ���� �������� ���ư���
        }
        // �Է¹��� ī�� ��ȣ�� x, y ��ǥ�� ��ȯ
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);
        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);
        // �� ī�尡 ���� �����̰� �޸��� ���
        if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 
                && checkAnimal[secondSelect_x][secondSelect_y] == 0) 
                && (arrayAnimal[firstSelect_x][firstSelect_y] == 
                arrayAnimal[secondSelect_x][secondSelect_y])) { 
            printf("\n\n����! %s �߰�\n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }
        else { // �� ī�尡 �ٸ� �����̰ų� �ո��� ���
            printf("\n\n��! ���� �ٸ� ���� ī��ų� �̹� ������ ī���Դϴ�.\n");
            printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n");
            failCount++; // ���� Ƚ�� 1 ����
        }
        if (foundAllAnimals() == 1) { // ��� ������ ã�Ҵ��� ����, 1 : ��, 0 : ����
            printf("\n\n�����մϴ�! ��� ������ �� ã�ҽ��ϴ�.\n");
            printf("�� %d�� �����߽��ϴ�.\n", failCount);
            break;
        }
    }
    return 0;
}

// ī�� ���� �迭 �ʱ�ȭ �Լ� 
void initAnimalArray() {  
    for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 5; j++) {
                arrayAnimal[i][j] = -1; // ī�� �޸� ����
            }
        }
}

// ���� �̸� �迭 �ʱ�ȭ �Լ� 
void initAnimalName() { 
    strAnimal[0] = "������";
    strAnimal[1] = "�ϸ�";
    strAnimal[2] = "������";
    strAnimal[3] = "�����";
    strAnimal[4] = "����";
    strAnimal[5] = "�ڳ���";
    strAnimal[6] = "�⸰";
    strAnimal[7] = "��Ÿ";
    strAnimal[8] = "Ÿ��";
    strAnimal[9] = "ȣ����";
}

// ī�� ���� �Լ� 
void shuffleAnimal() { 
    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 2; j++) { 
            int pos = getEmptyPosition(); // ī�� �������� �� ���� ã�� 
            int x = conv_pos_x(pos); // ī�� ��ȣ�� x ��ǥ�� ��ȯ
            int y = conv_pos_y(pos); // ī�� ��ȣ�� y ��ǥ�� ��ȯ
            arrayAnimal[x][y] = i; // ī�� ���� �迭�� ���� ��ȣ ����
        }
    }
}

// ī�� �������� �� ���� ã�� �Լ�
int getEmptyPosition() {
    while (1) {
        int randPos = rand() % 20; // �������� ���� ī�� ��ȣ ��ȯ(0~19)
        int x = conv_pos_x(randPos); // ��ȯ�� ī�� ��ȣ�� x ��ǥ�� ��ȯ
        int y = conv_pos_y(randPos); // ��ȯ�� ī�� ��ȣ�� y ��ǥ�� ��ȯ
        if (arrayAnimal[x][y] == -1) { // �ش� ��ġ�� ������� Ȯ��
            return randPos; // ������� ī�� ��ȣ ��ȯ
        }
    }
    return 0; // �� ������ �ϳ��� ������ 0 ��ȯ
}

// x ��ǥ ��ȯ �Լ� 
int conv_pos_x(int x) {
    return x / 5; // x ��ǥ, ī�� ��ȣ�� 5�� ���� ��
}

// y ��ǥ ��ȯ �Լ�
int conv_pos_y(int y) { 
    return y % 5; // y ��ǥ, ī�� ��ȣ�� 5�� ���� ������ 
}


// ���� ��ġ ��� �Լ� 
void printAnimals() { 
    printf("\n========= ���� ��ġ�� ���� �ݴϴ�. =========\n\n"); 
    for (int i = 0; i < 4; i++) { // arrayAnimal �迭 ����
         for (int j = 0; j < 5; j++) {
            printf("%8s", strAnimal[arrayAnimal[i][j]]); // ī�� ���� ��ǥ�� ���� �̸� ���
        }
        printf("\n"); 
    }
    printf("\n===========================================\n"); 
}

// ī�� ���� ��� �Լ� 
void printQuestion() { 
    printf("\n(����)\n\n"); 
    int seq = 0; // ���� ���� �� �ʱ�ȭ
    for (int i = 0; i < 4; i++) { // ī�� ������ ����
        for (int j = 0; j < 5; j++) {
            if (checkAnimal[i][j] != 0) { // ī�尡 �ո��̸� 
                printf("%8s", strAnimal[arrayAnimal[i][j]]); // ���� �̸� ���
            }
            else { // ī�尡 �޸��̸�
                printf("%8d", seq); // ī�� ��ȣ ���
            }
            seq++; // ���� ī�带 Ȯ���Ϸ� �Ѿ��
        }
        printf("\n");
    }
}

// ���� ���� Ȯ�� �Լ� 
int foundAllAnimals() { 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (checkAnimal[i][j] == 0) {
                return 0; // ������ ���� ī�尡 ����
            }
        }
    }
    return 1; // ��� ī�� ������
}
