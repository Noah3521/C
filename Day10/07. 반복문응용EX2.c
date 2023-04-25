#include <stdio.h>

int main(void) {
	int num = 1;
	int y = 0;
	printf("WHILE\n");
	while (y < 3) {
		int x = 0;
		while (x < 3) {
			printf("%d ", num);
			num += 1;
			x += 1;
		} printf("\n");
		y += 1;
	}
	int num1 = 1;
	printf("FOR\n");
	for (int y = 0; y < 3; y += 1) {
		for (int x = 0; x < 3; x += 1) {
			printf("%d ", num1);
			num1 += 1;
		} printf("\n");
	}

	return 0;
}