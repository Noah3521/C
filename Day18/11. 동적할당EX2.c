#include <stdio.h>
#include <malloc.h>

int main(void) {
	double* pfnum1 = (double*)malloc(sizeof(double));
	double* pfnum2 = (double*)malloc(sizeof(double));
	if (pfnum1 == NULL || pfnum2 == NULL) {
		printf("�����Ҵ� ����!\n");
	}
	else {
		printf("�Ǽ��� 2�� �Է� >> ");
		scanf_s("%lf", pfnum1);
		scanf_s("%lf", pfnum2);
		printf("������ ����� �� : %.1f, %.1f\n", *pfnum1, *pfnum2);
		printf("������ ����� ���� �� : %.2f\n", *pfnum1 + *pfnum2);
	}
	if (pfnum1 != NULL) {
		free(pfnum1);
	}
	if (pfnum2 != NULL) {
		free(pfnum2);
	}
	return 0;
}
