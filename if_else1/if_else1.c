#include <stdio.h>

int main(void)
{
	int number;

	printf("정수를 입력하시오:");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("입력된 정수는 짞수입니다.\n");
	else
		printf("입력된 정수는 홀수 입니다.");
}