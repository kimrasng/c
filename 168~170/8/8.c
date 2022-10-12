#include<stdio.h>

int main() {

	int ascii;

	printf("아스키 코드값을 입력하시오: ");

	scanf_s("%d", &ascii);

	printf("문자: %c입니다.", (char)ascii);


	return 0;

}