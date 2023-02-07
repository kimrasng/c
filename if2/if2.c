#include <stdio.h>

int main(void)
{
	int number;

	printf("정수를 입력하시오:");
	scanf_s("%d", & number);

	if (number < 0)
		number = -number;

	printf("절대갑은 %d입니다.\n", number);
	return 0;
}