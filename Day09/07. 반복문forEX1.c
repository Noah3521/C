#include <stdio.h>

int main(void) {
	int num = 0;
	while (num == 0) {
		printf("0�� �ƴ� ���� �Է� >> ");
		scanf_s("%d", &num);
		if (num == 0) {
			printf("���Է��ϼ���.\n");
		}
	}
	printf("%d�� ������\n", num);
	if (num < 0) {
		num *= -1;
	}
	if (num <= 20) {
		for (int i = num; i <= 20; i += num) {
			printf("%d ", i);
		}
	}
	else {
		printf("���� ���� ����\n");
	}
	return 0;
}