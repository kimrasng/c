#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x, y, result;

	printf("�ΰ��� �Ǽ��� �Է��Ͻÿ� :");
	scanf("%lf %lf", &x, &y);
	result = x + y;
	printf("%f + %f = %f\n", x, y, result);
	result = x - y;
	printf("%f - %f = %f\n", x, y, result);
	result = x * y;
	printf("%f * %f = %f\n", x, y, result);
	result = x / y;
	printf("%f / %f = %f\n", x, y, result);
	

	return 0;
}