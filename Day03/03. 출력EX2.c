#include <stdio.h>

int main(void) {
	// �ڵ�� ������ �����ϰ� ª��, �����ϰ�....��� ���� �⺻�̴�.
	double fnum1 = 13.1;
	double fnum2 = 13.2;
	double fnum3 = 13.3;
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	// +@ : ����� �� �����ϰ� ���ٷ� �������� ��
	// - 1) ����� ���� ���ٴ� printf �ѹ����� �����Ѵ�.
	// - 2) �ٹٲ��� �ȳ����� ���ٷ� ������ ������ ���ٷ� ���� �ʿ� ����
	//      ����ϴ� ���� �ִ� 3~5�� ������ �����ϴ� ���� �˾ƺ��� ����.
	printf("1 : %f\n2 : %f\n3 : %f\n%d, %d, %d\n", fnum1, fnum2, fnum3, num1, num2, num3);

	printf("1 : %f\n2 : %f\n3 : %f\n", fnum1, fnum2, fnum3);
	printf("%d, %d, %d\n", num1, num2, num3);
	return 0;
}