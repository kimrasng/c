#include<stdio.h>

int main() {

	int x = 10, y = 20;

	printf("x=%d y=%d\n", x, y);

	int tmp = 0;

	tmp = x;

	x = y;

	y = tmp;

	printf("x=%d y=%d", x, y);

	return 0;

}