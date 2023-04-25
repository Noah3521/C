#include <stdio.h>

int main(void) {
	// 특징 : 반복횟수 10억회
	// - 필요한 경우의 수 : 2 개
	// - 불필요한 경우의 수 : 9억 9천 9백 9십 9만 9천 9백 9십 8 개
	int num1 = 1;
	while (num1 <= 1000000000) {
		if (num1 % 500000000 == 0) {
			printf("%d ", num1);
		}
		num1 += 1;
	} printf("\n");
	// 특징 : 반복횟수 2회
	// - 필요한 경우의 수 : 2 개
	// - 불필요한 경우의 수 : 없음
	int num2 = 500000000;
	while (num2 <= 1000000000) {
		printf("%d ", num2);
		num2 += 500000000;
	} printf("\n");
	return 0;
}