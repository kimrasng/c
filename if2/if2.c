#include <stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", & number);

	if (number < 0)
		number = -number;

	printf("���방�� %d�Դϴ�.\n", number);
	return 0;
}