#include<stdio.h>

int main() {

	double x, y, h;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");

	scanf_s("%lf %lf %lf", &x, &y, &h);

	printf("������ ���Ǵ� %lf�Դϴ�", x * y * h);

	return 0;

}