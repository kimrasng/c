#include <stdio.h>

int main(void)
{
	double x, y, z, sum, average;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &y);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &z);

	sum = x + y + z;

	average = sum / 3;

	printf("���� %lf�̰� ����� %lf�Դϴ�. \n", sum, average);

	return 0;
}