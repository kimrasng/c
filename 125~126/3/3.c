#include <stdio.h>

int main(void)
{
	double h, b, a;

	printf("�ﰢ���� �غ�: ");
	scanf_s("%lf", &b);

	printf("�ﰢ���� ����: ");
	scanf_s("%lf", &h);

	a = 0.5 * h * b;

	printf("�ﰢ���� ����: %lf \n ", a);

	return 0;
}