#include <stdio.h>

int main(void)
{
	double x, val;

	printf("�Ǽ��� �Է��ϼ���: ");
	scanf_s("%lf", &x);

	val = 3 * x * x + 7 * x + 11;

	printf("���׽��� ���� %lf \n", val);

	return 0;
}