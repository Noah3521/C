#include <stdio.h>

int main(void) {
	int num = 0;
	printf("���� �Է� >> ");
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