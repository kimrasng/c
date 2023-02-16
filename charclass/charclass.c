#include <stdio.h>

int main(void) {
	char ch;

	printf("문자를 입력하시오: ");
	scanf_s("%c", &ch);

	if (ch >= 'A' && ch <= 'Z')
		printf("%c는 대문자입니다.\n", ch);
	else if (ch >= 'a' && ch <= 'z')
		printf("%c는 소문자입니다.\n", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c는 대문자입니다.\n", ch);
	else
		printf("%c는 기타문자 입니다.\n", ch);

	return 0;
}