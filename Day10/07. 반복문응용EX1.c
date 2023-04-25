#include <stdio.h>

int main(void) {
	for (int y = 1; y <= 9; y += 1) {
		for (int x = 1; x <= 9; x += 1) {
			printf("%d x %d = %d\n", y, x, y * x);
		} printf("\n");
	}
	int y = 1;
	int x = 0;
	while (y <= 9) {
		// 안쪽 반복문의 반복제어변수는, 이전 결과를 이어가는게 아니면...
		// 항상 최초값으로 돌아와야 한다.
		x = 1;
		while (x <= 9) {
			printf("%d x %d = %d\n", 1, x, 1 * x);
			x += 1;
		}
		y += 1;
	}
	return 0;
}