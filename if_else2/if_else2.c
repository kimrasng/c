#include <stdio.h>

int main(void)
{
	int n, d, result;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("�и� �Է��Ͻÿ�: ");
	scanf_s("%d", &d);

	if (d == 0)
	{
		printf("0���� ���� ���� �����ϴ�.\n");
	}
	else
	{
		result = n / d;
		printf("����� %d�Դϴ�.\n", result);
	}
	return 0;
}