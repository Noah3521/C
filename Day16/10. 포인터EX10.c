#include <stdio.h>

void swap(int* pnum1, int* pnum2) {
	// ������ ������ ������ ��ü�Ѵ�.
	int tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
	// �����ͺ����� ���� �ҷ����� �Ű������� ������ �翬�� �����Ѵ�.
	// + ���� ��ȯ��Ű�� return���ҵ� �����Ѵ�.
}

int main(void) {
	int num1 = 0; int num2 = 0;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	printf("��ü�� : %d, %d\n", num1, num2);
	swap(&num1, &num2);
	printf("��ü�� : %d, %d\n", num1, num2);

	return 0;
}