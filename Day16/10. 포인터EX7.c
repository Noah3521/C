#include <stdio.h>

void init2var(int* pnum, double* pfnum) {
	*pnum = 10;		// ������ �����Ǹ� �Լ��� ��ȯ���� �������
	*pfnum = 3.14;	// ���� ��ȯ��ų �� �ִ�.
}

int main(void) {
	int num = 0;
	double fnum = 0;
	init2var(&num, &fnum);
	printf("%d, %.2f\n", num, fnum);
	return 0;
}