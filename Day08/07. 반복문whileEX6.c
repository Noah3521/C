#include <stdio.h>

int main(void) {
	// 1. ����� �Ӹ��ӿ��� �ҵ� ������ �ʴ´�.
	//   ����� ����� ����� ���ϴ� ����� ����.

	// 2. ���ѹݺ��� Ư�� ������ �����ϴ� ���� ����...
	//    ���ѹݺ��� �ݺ�Ƚ�� �� ���ڵ��� �غ��Ѵ�.
	//    ���� �Ǻ����� �ʴ´�.
	int value = 0;
	int num = 1;
	while (value < 1 || value > 10) {
		printf("1���� 10������ ���� �Է� >> ");
		scanf_s("%d", &value);
	}
	printf("%d�� ������\n", value);
	while (num <= value) {
		if (value % num == 0) {
			printf("%d ", num);
		}
		num += 1;
	} printf("\n");
	return 0;
}