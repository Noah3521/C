#include <stdio.h>

int main(void) {
	int arr[5] = { 0 };
	// ũ��� �翬�� ���ؾ� ��.
	int size = sizeof(arr) / sizeof(int);
	// �迭 ���ÿ��� ������, �ε����� �������� ��´�.
	// ���ǻ��� : ������ �ٸ� �ڵ�� ����� ��ġ�� �ʴ´�.
	for (int i = 0; i < size; i += 1) {
		arr[i] = 15 * (i + 1);
	}
	// �� : �迭�� Ư���� ��찡 �ƴϸ�, �ݺ� ���� ��Դ´�.
	printf("�迭�� ����� �� :");
	for (int i = 0; i < size; i += 1) {
		printf(" %d", arr[i]);
	} printf("\n");
	return 0;
}