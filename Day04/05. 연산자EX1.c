#include <stdio.h>

int main(void) {
	// 0�� �־�δ°�, �Է¹��� ������ �־�� ���̰�
	// �Է¾ȹ����� �ʿ��� �� �ٷ� �־�θ� �˴ϴ�.
	int num1 = 100;
	double fnum1 = 3.14;
	
	// ������ ����� ���, ������ ���� ö���ϰ� �����Ѵ�.
	printf("%d + %.2f = %.2f\n", num1, fnum1, num1 + fnum1);
	printf("%d - %.2f = %.2f\n", num1, fnum1, num1 - fnum1);
	
	// �Ҽ����� �ʿ��� ��� ���� '����' �� �ִ�.
	printf("%d * %.2f = %.0f\n", num1, fnum1, num1 * fnum1);
	printf("%d / %.2f = %.2f\n", num1, fnum1, num1 / fnum1);
	return 0;
}