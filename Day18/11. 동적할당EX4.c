#include <stdio.h>
#include <malloc.h>

int main(void) {
	// �����Ҵ��� ������ ����/�������� �����մϴ�.
	// �� �ܿ��� �츮�� �ٷ�� ������ ������Դϴ�.
	int size = 5; int result = 0;
	int* arr = NULL;
	if (size > 0) {
		arr = (int*)malloc(sizeof(int) * size);
		if (arr != NULL) {
			printf("������ %d�� �Է� >> ", size);
			for (int i = 0; i < size; i += 1) {
				scanf_s("%d", &arr[i]);
			}
			for (int i = 0; i < size; i += 1) {
				result += arr[i];
			}
			printf("����� �� :");
			for (int i = 0; i < size; i += 1) {
				printf(" %d", arr[i]);
			} printf("\n", result);
		}
		else printf("�����Ҵ����\n");
	}
	else printf("�߸��� ũ��\n");
	if (arr != NULL) {
		free(arr);
	}
	return 0;
}