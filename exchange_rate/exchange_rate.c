/* 환율을 계산하는 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double rate;	// 원/달러 환율
	double usd;	// 달러화
	int krw;	// 원화

	printf("환율을 입력하시오: ");	// 입력 안내 메시지
	scanf("%lf", &rate);	// 사용자로부터 환율입력

	printf("원화 급액을 입력하시오: ");	// 입력 안내 메시지
	scanf("%ld", &krw);	// 원화 급액 입력

	usd = krw / rate;	// 달러화로 환산

	printf("원화 %d원은 %f달러입니다.\n, krw, usd"); //	계산 결과 출력
	
	return 0;	// 함수 결과값 반환
}