#include <stdio.h>

int main(void)
{
	char code = 'A';

	printf("%d %d %d \n", code, code + 1, code + 2);	//	65 66 67�� ��µȴ�.
	printf("%c %c %c \n", code, code + 1, code + 2);	//	A B C�� ��µȴ�.
	return 0;
}