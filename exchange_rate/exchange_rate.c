/* ȯ���� ����ϴ� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double rate;	// ��/�޷� ȯ��
	double usd;	// �޷�ȭ
	int krw;	// ��ȭ

	printf("ȯ���� �Է��Ͻÿ�: ");	// �Է� �ȳ� �޽���
	scanf("%lf", &rate);	// ����ڷκ��� ȯ���Է�

	printf("��ȭ �޾��� �Է��Ͻÿ�: ");	// �Է� �ȳ� �޽���
	scanf("%ld", &krw);	// ��ȭ �޾� �Է�

	usd = krw / rate;	// �޷�ȭ�� ȯ��

	printf("��ȭ %d���� %f�޷��Դϴ�.\n, krw, usd"); //	��� ��� ���
	
	return 0;	// �Լ� ����� ��ȯ
}