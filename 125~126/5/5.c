#include <stdio.h>

int main(void)
{
	double x, val;

	printf("실수를 입력하세요: ");
	scanf_s("%lf", &x);

	val = 3 * x * x + 7 * x + 11;

	printf("다항식의 값은 %lf \n", val);

	return 0;
}