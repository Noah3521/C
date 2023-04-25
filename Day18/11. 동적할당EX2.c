#include <stdio.h>
#include <malloc.h>

int main(void) {
	double* pfnum1 = (double*)malloc(sizeof(double));
	double* pfnum2 = (double*)malloc(sizeof(double));
	if (pfnum1 == NULL || pfnum2 == NULL) {
		printf("동적할당 실패!\n");
	}
	else {
		printf("실수값 2개 입력 >> ");
		scanf_s("%lf", pfnum1);
		scanf_s("%lf", pfnum2);
		printf("변수에 저장된 값 : %.1f, %.1f\n", *pfnum1, *pfnum2);
		printf("변수에 저장된 값의 합 : %.2f\n", *pfnum1 + *pfnum2);
	}
	if (pfnum1 != NULL) {
		free(pfnum1);
	}
	if (pfnum2 != NULL) {
		free(pfnum2);
	}
	return 0;
}
