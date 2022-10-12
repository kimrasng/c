#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;	// 최대갑으로 초기화한다. 32767
	unsigned short u_money = USHRT_MAX;	// 최대갑으로 초기화한다. 65535

	s_money = s_money + 1;
	printf("s_money = %u\n", s_money);

	u_money = u_money + 1;
	printf("u_money = %u\n", u_money);

	return 0;
}