#include<stdio.h>

#define SQMETER_PER_PYEONG 3.3058

int main() {

	int pyeong;

	printf("평을 입력하세요: ");

	scanf_s("%d", &pyeong);

	printf("%f평방미터입니다.", pyeong * SQMETER_PER_PYEONG);

	return 0;

}