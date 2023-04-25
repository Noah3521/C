#include <stdio.h>

int main(void) {
	int arr[3] = { 0 };
	int result = 0;
	printf("정수값 3개 입력 >> ");
	scanf_s("%d", &arr[0]);
	scanf_s("%d", &arr[1]);
	scanf_s("%d", &arr[2]);
	result = arr[0] + arr[1] + arr[2];
	printf("배열에 저장된 값들의 합 : %d\n", result);
	printf("배열에 저장된 값들의 곱 : %d\n", arr[0] * arr[1] * arr[2]);
	printf("배열에 저장된 값들의 평균 : %.2f\n", result/3.0);
	return 0;
}