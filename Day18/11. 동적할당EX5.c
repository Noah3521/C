#include <stdio.h>
#include <malloc.h>

// 동적할당은 바로 쓰지 않고, 항상 "재포장"을 하여 사용한다.
double* makeArr(int size) {
	double* parr = (double*)malloc(sizeof(double) * size);
	return parr;
}
int main(void) {
	int size = 0;
	double* parr = NULL;
	printf("배열의 크기 입력 >> ");
	scanf_s("%d", &size);
	// 대입연산자 : 오른쪽값을 왼쪽 변수에 저장하는 연산자.
	// 특징 - 저장하는 값이 연산결과로 준비가 된다.
	if (size <= 0) printf("잘못된 크기입니다.\n");
	else if (!(parr = makeArr(size))) printf("동적할당 실패입니다.\n");
	else {
		for (int i = 0; i < size; i += 1) {
			parr[i] = 1.1 + 0.7 * i;
		}
		printf("배열에 있는 값\n");
		for (int i = 0; i < size; i += 1) {
			printf("%.1f ", parr[i]);
		} printf("\n");
	}
	if (parr != NULL) free(parr);
	return 0;
}