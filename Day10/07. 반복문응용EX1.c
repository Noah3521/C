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
		// ���� �ݺ����� �ݺ��������, ���� ����� �̾�°� �ƴϸ�...
		// �׻� ���ʰ����� ���ƿ;� �Ѵ�.
		x = 1;
		while (x <= 9) {
			printf("%d x %d = %d\n", 1, x, 1 * x);
			x += 1;
		}
		y += 1;
	}
	return 0;
}