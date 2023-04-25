#include <stdio.h>

int main(void) {
	// 차이점에 대해서 생각해보고 올 것
	int num1 = 1;
	while (num1 <= 30) {
		if (num1 % 5 == 0) {
			printf("%d ", num1);
		}
		num1 += 1;
	} printf("\n");
	// 위가 코드가 많고, 아래가 코드가 적다는 절대 아님.
	int num2 = 5;
	while (num2 <= 30) {
		printf("%d ", num2);
		num2 += 5;
	} printf("\n");
	return 0;
}