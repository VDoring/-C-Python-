#include <stdio.h>
int main()
{
	printf("__HDR's ����ó�� ���α׷�!__\n");
	char name;
	int sum, avg, korean, english, math; //����

	printf("����� �̸��� �Է����ּ��� -> "); 
	scanf("%c", &name); //�̸��Է�

	printf("\n����� ����������? = "); //���� ������
	scanf("%d", &korean);
	printf("\n����� ����������? = ");
	scanf("%d", &english);
	printf("\n����� ����������? = ");
	scanf("%d", &math);

	printf("%c���� ������ %d�� �Դϴ�.", name, sum);
	printf("%c���� ����� %d���Դϴ�.", name, avg);

	if (avg >= 90) {
		printf("����� ������ A�Դϴ�. ���ϵ帳�ϴ�!");
	}
	else if (avg >= 80) {
		printf("����� ������ B�Դϴ�.");
	}
	else if (avg >= 70) {
		printf("����� ������ C�Դϴ�.");
	}
	else if (avg >= 60) {
		printf("����� ������ D�Դϴ�. �ƽ��׿� -_-;");
	}
	else
		printf("�ٽ� �Է����ּ���");
}