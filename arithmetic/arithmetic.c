#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, result;

	printf("µÎ°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À :");
	scanf("%d %d", &x, &y);
	
	result = x + y;	// µ¡¼À ¿¬»ê
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;	// »¬¼À ¿¬»ê
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;	// °ö¼À ¿¬»ê
	printf("%d * %d = %d\n", x, y, result);

	result = x % y;	// ³ª¸ÓÁö ¿¬»ê
	printf("%d %% %d = %d\n", x, y, result);
	return 0;
}