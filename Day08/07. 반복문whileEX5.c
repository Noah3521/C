#include <stdio.h>

int main(void) {
	int limit = 0;
	int num = 1;
	// ���ѹݺ��� �Է¿��� ����Ѵ�.
	while (limit <= 0 || limit >= 10) {
		printf("0���� ũ�� 10���� ���� ���� �Է� >> ");
		scanf_s("%d", &limit);
		if (limit <= 0 || limit >= 10) {
			printf("���Է��ϼ���.\n");
		}
	}
	// ���ѹݺ��� ���뼺�� ������, �⺻������ ����̳� ���꿡
	// ����Ѵ�.
	printf("��� : ");
	while (num <= limit) {
		printf("%d ", num);
		num += 1;
	}
	// �� �ݺ��� �Է¿� ���ؼ��� ���� �����ϴ� ���·� ��ĥ �� �ְ�
	// �� �ܿ��� �Ұ����ϴ� ����
	return 0;
}