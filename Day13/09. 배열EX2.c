#include <stdio.h>

int main(void) {
	int arr[3] = { 0 };
	int result = 0;
	printf("������ 3�� �Է� >> ");
	scanf_s("%d", &arr[0]);
	scanf_s("%d", &arr[1]);
	scanf_s("%d", &arr[2]);
	result = arr[0] + arr[1] + arr[2];
	printf("�迭�� ����� ������ �� : %d\n", result);
	printf("�迭�� ����� ������ �� : %d\n", arr[0] * arr[1] * arr[2]);
	printf("�迭�� ����� ������ ��� : %.2f\n", result/3.0);
	return 0;
}