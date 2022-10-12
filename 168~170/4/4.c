#include<stdio.h>

int main() {

	double x, y, h;

	printf("상자의 가로 세로 높이를 한번에 입력: ");

	scanf_s("%lf %lf %lf", &x, &y, &h);

	printf("상자의 부피는 %lf입니다", x * y * h);

	return 0;

}