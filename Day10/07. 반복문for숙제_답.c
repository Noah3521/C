#include <stdio.h>

int main(void) {
	int num = 0;
	int check;
	printf("���� �Է� >> ");
	scanf_s("%d", &num);
	check = num < 0;
	// �ݺ����� �߿��� ���� ���� �غ� �߿�������...
	// �ݺ�Ƚ���� ���ϸ� ��Ե� ���ư���.
	for (
		int count = ((check) ? -num : num) * 2 + 1;
		count > 0; 
		count -= 1
		) {
		printf("%d ", num);
		if (check) num += 1; // ����
		else num -= 1; // ���
	}
	printf("\n");
	return 0;
}