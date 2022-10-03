// 사용자로입력받은 2개의 정수의 합을 계산하여 출력
// 원도우 사용자라면 반드시 첫 부분에 다음을 추가한다. 이후책의 소스에서는 생략된다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x; // 첫번쨰 정수를 저장할 변수
	int y; // 두번쨰 정수를 저장할 변수
	int sum; // 2개의 정수의 합을 저장할 변수
	
	printf("첫번쨰 숫자를 입력하시오:"); // 입력 안내 메시지 출력
	scanf("%d", &x);

	printf("두번쨰 숫자를 입력하시오:");
	scanf("%d", &y);

	sum = x + y;
	printf("두수의 합: %d\n", sum);

		return 0;
}