#include <stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("�Էµ� ������ �A���Դϴ�.\n");
	else
		printf("�Էµ� ������ Ȧ�� �Դϴ�.");
}