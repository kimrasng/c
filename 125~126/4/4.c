#include <stdio.h>

int main(void)
{
	double f, c;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &f);

	c = (5.0 / 9.0) * (f - 32.0);

	printf("�������� %f���Դϴ�. \n", c);

	return 0;
}