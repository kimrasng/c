#include <stdio.h>

int main(void)
{
	double x, y, z, sum, average;

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &x);

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &y);

	printf("실수를 입력하시오: ");
	scanf_s("%lf", &z);

	sum = x + y + z;

	average = sum / 3;

	printf("합은 %lf이고 평균은 %lf입니다. \n", sum, average);

	return 0;
}