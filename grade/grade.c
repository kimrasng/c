#include <stdio.h>

int main(void)
{
	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("���� A\n");
	if (score >= 80)
		printf("���� B\n");
	if (score >= 70)
		printf("���� C\n");
	if (score >= 60)
		printf("���� D\n");
	if (score >= 50)
		printf("���� F\n");

	return 0;
}