#include <stdio.h>
int main(void)
{
	double light_speed = 300000;	//���� �ӵ��� �����ϴ� ����(300000km/sec)
	double distance = 149600000;	//�¾�� ���� ���� �Ÿ��� �����ϴ� ����
									//149600000km�� �ʱ�ȭ�Ѵ�.
	double time;	//�ð��� ��Ÿ���� ����
	time = distance / light_speed;	//�Ÿ��� ���� �ӵ��� ������.

	printf("���� �ӵ��� %fkm/s \n", light_speed);
	printf("�¾�� �������� �Ÿ� %fkm \n", distance);
	printf("���� �ð��� %f��\n", time);	//�ð��� ����Ѵ�
	return 0;
}