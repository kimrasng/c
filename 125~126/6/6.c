#include <stdio.h>

int main(void)
{
	double weight_on_eart, weight_on_moon;

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf_s("%lf", &weight_on_eart);

	weight_on_moon = weight_on_eart * 0.17;

	printf("�޿����� �����Դ� %lf kg�Դϴ�.\n", weight_on_moon);

	return 0;
}