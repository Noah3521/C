#include <stdio.h>

int main(void) {
	int num = 1;
	// ������ ������ 0���� �ʱ�ȭ���� �ʴ´�.
	// - �Է¹޴� ������ ���ѹݺ��� �� ���...
	//  �ʿ���� ���� �־�θ� �ȴ�.
	while (num % 10 != 0) {
		printf("10�� ��� �Է� >> ");
		scanf_s("%d", &num);
		if (num % 10 != 0) {
			printf("%d�� 10�� ����� �ƴմϴ�.\n", num);
		}
	}
	printf("�Է¹��� 10�� ��� : %d\n", num);
	return 0;
}