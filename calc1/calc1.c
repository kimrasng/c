#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("수식을 입력하시오(예: 2 + 5) \n");
	printf(">>");
	scanf_s("%d %c %d", &x, &op, &y); // << 에러
	
	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("지원되지 않는 연사자입니다. \n");

	printf("%d %c %d = %d \n", x, op, y, result);

	return 0;
}