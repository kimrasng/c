#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;	// �ִ방���� �ʱ�ȭ�Ѵ�. 32767
	unsigned short u_money = USHRT_MAX;	// �ִ방���� �ʱ�ȭ�Ѵ�. 65535

	s_money = s_money + 1;
	printf("s_money = %u\n", s_money);

	u_money = u_money + 1;
	printf("u_money = %u\n", u_money);

	return 0;
}