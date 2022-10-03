#include <stdio.h>

int main(void)
{
	double h, b, a;

	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf_s("%lf", &b);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf_s("%lf", &h);

	a = 0.5 * h * b;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %lf \n ", a);

	return 0;
}