#include <stdio.h>

int main(void) {
	int num = 0;
	printf("정수 입력 >> ");
	scanf_s("%d", &num);
	if (num > 0) {
		for (int i = num; i >= -num; i -= 1) {
			printf("%d ", i);
		} printf("\n");
	}
	else {
		for (int i = num; i <= -num; i += 1) {
			printf("%d ", i);
		} printf("\n");
	}
	return 0;
}