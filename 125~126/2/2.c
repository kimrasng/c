#include <stdio.h>

int main(void)
{
	double mile, meter;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &mile);

	meter = mile * 1609.0;

	printf("%0.1lf������ %lf�����Դϴ�. \n", mile, meter);

	return 0;
}