//달 일수를 계산하는 프로그램
#include <stdio.h>

int main(void)
{
	int month, days;

	printf("달을 입력하시오: ");
	scanf_s("%d", &month);

	switch (month)	//case = 경우 예: case 가 2일경우 days = 28
	{
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:	//나머지 경우
			days = 31;
			break;
	}
	printf("%d월의 일수는 %d입니다.\n", month, days);
	return 0;
}