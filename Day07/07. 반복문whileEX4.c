#include <stdio.h>

int main(void) {
	// �������� ���ؼ� �����غ��� �� ��
	int num1 = 1;
	while (num1 <= 30) {
		if (num1 % 5 == 0) {
			printf("%d ", num1);
		}
		num1 += 1;
	} printf("\n");
	// ���� �ڵ尡 ����, �Ʒ��� �ڵ尡 ���ٴ� ���� �ƴ�.
	int num2 = 5;
	while (num2 <= 30) {
		printf("%d ", num2);
		num2 += 5;
	} printf("\n");
	return 0;
}