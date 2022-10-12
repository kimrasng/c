#include<stdio.h>

int main() {

	double m, v, E;

	printf("질량(kg): ");

	scanf_s("%lf", &m);

	printf("속도(m/s): ");

	scanf_s("%lf", &v);

	E = m * v * v / 2.0;

	printf("운동에너지(J): %lf", E);

	return 0;

}