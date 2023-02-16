#include <stdio.h>

int main(void)
{
	int score;

	printf("성적을 입력하시오: ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("학점 A\n");
	if (score >= 80)
		printf("학점 B\n");
	if (score >= 70)
		printf("학점 C\n");
	if (score >= 60)
		printf("학점 D\n");
	if (score >= 50)
		printf("학점 F\n");

	return 0;
}