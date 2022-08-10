#include <stdio.h>

int main(void)
{
	int coffee_count = 0; // 커피 수량(값을 바꿔 실습하기)
	int sandwich_count = 0; // 샌드위치 수량(값을 바꿔 실습하기)
	int total_price = 0; // 총 금액

	// 샌드위치와 커피 모두 구매 시 샌드위치 6,000원, 커피 3,500원(할인가)으로 계산
	if (sandwich_count > 0 && coffee_count > 0) {
		total_price = (sandwich_count * 6000) + (coffee_count * 3500);
	}
	// 그 외의 경우 샌드위치 6,000원, 커피 4,500원으로 계산
	else {
		total_price = (sandwich_count * 6000) + (coffee_count * 4500);
	}

	printf("주문하신 메뉴의 총 금액은 %d원입니다.\n", total_price); // 결과 출력
	return 0;
}