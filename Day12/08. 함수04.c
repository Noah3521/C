#include <stdio.h>

// 1���� : ��ȯ���� �Ű������� ��� ������ �ִ�.
// - ���� -> ó�� -> ������ �Ǵ� �Լ�. ����/ó���� �����Ѵ�.
// ���ǻ���
// - 1) �ܼ������� ������ �ʴ´�.
// - 2) ���ڿ��� ��ȯ��ų �� ����
// - 3) �Լ� �̸��� ������ �� : make, create, copy, swap �� �����, �����Ѵٰ� ����
int make_sum(int num1, int num2) {
	return num1 + num2;
}

int main(void) {
	// 1������ ȣ�� : ���� �ʿ��� ���� ��ġ�Ͽ�, ���� �־ ȣ���Ѵ�.
	int num1 = 0;
	int num2 = 0;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("��� : %d\n", make_sum(num1, num2));
	return 0;
}