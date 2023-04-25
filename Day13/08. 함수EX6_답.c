#include <stdio.h>

int make_sum(int num1, int num2) {
	int result = 0;
	if (num1 > num2) { // �� ������ ���� �ٲ۴�
		int tmp = num1;	// C�� A�� �����ϰ�
		num1 = num2;	// A�� B�� �����ϰ�
		num2 = tmp;		// B�� C�� �����Ѵ�
	}
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	return result;
}

int main(void) {
	// 1) 1�������� �������� ���ϴ� �Լ��� �����ϼ���.
	// ex1) -3 ����  3�� ��� :  0
	// ex2) -3 ����  4�� ��� :  4
	// ex3)  4 ���� -4�� ��� :  0
	// ex4)  4 ���� -3�� ��� :  4
	// ex5)  1 ���� 10�� ��� : 55
	// ex6) 10 ����  1�� ��� : 55
	// ex7)  5 ����  5�� ��� :  5

	// 2) �׽�Ʈ �� Ȯ���� ���� �ڵ带 ���� �ۼ��ؼ�
	//    ����� Ȯ���ϼ���.
	printf("2���� 10������ �� : %d\n", make_sum(2, 10));
	printf("1���� 10������ �� : %d\n", make_sum(1, 10));
	printf("-10���� -2������ �� : %d\n", make_sum(-10, -2));
	printf("-10���� -1������ �� : %d\n", make_sum(-10, -1));
	printf("10���� 10������ �� : %d\n", make_sum(10, 10));
	return 0;
}