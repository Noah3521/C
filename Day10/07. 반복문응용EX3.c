#include <stdio.h>

int main(void) {
	// 다중 반복 아무거나 이용해서 아래처럼 출력하세요.
	// 1 4 7
	// 2 5 8
	// 3 6 9
	for (int value = 1; value <= 3; value += 1) {
		int num1 = value;
		for (int count = 3; count > 0; count -= 1) {
			printf("%d ", num1);
			num1 += 3;
		} printf("\n");
	}
	return 0;
}