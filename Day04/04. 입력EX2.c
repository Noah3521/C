#include <stdio.h>

int main(void) {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	double fnum1 = 0.0;
	double fnum2 = 0.0;
	double fnum3 = 0.0;
	printf("���� 3���� �Է��ϼ��� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	printf("�Ǽ� 3���� �Է��ϼ��� >> ");
	scanf_s("%lf", &fnum1);
	scanf_s("%lf", &fnum2);
	scanf_s("%lf", &fnum3);
	printf("\n����� ����\n");
	printf("->%d<->%d<->%d<-\n", num1, num2, num3);
	printf("����� �Ǽ� : %.2f, %.2f, %.2f\n", fnum1, fnum2, fnum3);
	return 0;
}