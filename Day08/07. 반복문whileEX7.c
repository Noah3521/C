#include <stdio.h>

int main(void) {
	int value = 0;
	int result = 0;
	printf("���� �Է� >> ");
	scanf_s("%d", &value);
	// while�� ���ѹݺ� : �ݺ��� ���� ������ ���� ���ƹ�����.
	// - ���� ������ �غ���ϴ� �� ������ ��������.
	// - �߰������� �ʿ����, ����� ������ �ȴ�.
	// - value�� ����� ���� �� �̻� �Ⱦ��� ���ƹ�����.
	//   ������ ���, �����ؼ� ���� �׸��̴�.
	while (value > 0) {
		result += value;
		value -= 1;
	}
	printf("��� : %d\n", result);
	return 0;
}