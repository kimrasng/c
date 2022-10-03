#include <stdio.h>

int main(void)
{
	double weight_on_eart, weight_on_moon;

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf_s("%lf", &weight_on_eart);

	weight_on_moon = weight_on_eart * 0.17;

	printf("달에서의 몸무게는 %lf kg입니다.\n", weight_on_moon);

	return 0;
}