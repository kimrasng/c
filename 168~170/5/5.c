#include<stdio.h>

#define SQMETER_PER_PYEONG 3.3058

int main() {

	int pyeong;

	printf("���� �Է��ϼ���: ");

	scanf_s("%d", &pyeong);

	printf("%f�������Դϴ�.", pyeong * SQMETER_PER_PYEONG);

	return 0;

}