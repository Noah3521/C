#include <stdio.h>
#include <malloc.h>

void single_variable(void) {
	int* pnum1 = (int*)malloc(sizeof(int));
	int* pnum2 = (int*)malloc(sizeof(int));
	// �����Ҵ��� �ٽ�����Ʈ : ������ ������ �����Ǿ��ٰ� Ȯ���ؾ� �Ѵ�.
	// -> �����Ҵ� ���нÿ��� �ּҰ��� 0 �� ������, C������ NULL�̶� ǥ���Ѵ�.
	// -> ���/��������� NULL ���θ� üũ�ϱ� ���� ���ǹ��� ���ȴ�.
	if (pnum1 != NULL && pnum2 != NULL) {
		*pnum1 = 100;
		*pnum2 = 200;
		printf("��� : %d\n", *pnum1 + *pnum2);
	}
	else {
		printf("�ϳ� �̻��� ������ �����Ҵ翡 �����߽��ϴ�.\n");
	}
	// ���������� �Ҵ�޾Ҵ��� üũ�ϰ�, �����Ҵ������� �Ѵ�.
	if (pnum1 != NULL) {
		free(pnum1);
	}
	if (pnum2 != NULL) {
		free(pnum2);
	}
}
void array_variable(void) {
	// �����Ҵ����� �迭�� ���� �� ���ǻ��� : ũ����� ���� �����Ѵ�.
	int size = 0; // ������ ���� ����
	int* parr = NULL; // �����ͺ����� �ּҰ� 0(NULL)���� �ʱ�ȭ�Ѵ�.
	printf("�迭�� ũ�� �Է� >> ");
	scanf_s("%d", &size);
	// ũ�⸦ �̿��� �� ���ǻ��� : ���ǹ����� �ùٸ� ũ�⿩�θ� üũ�ؾ� ��
	if (size <= 0) printf("�ùٸ��� ���� ũ��....\n");
	else {
		parr = (int*)malloc(sizeof(int) * size);
		if (parr != NULL) {
			for (int i = 0; i < size; i += 1) {
				parr[i] = 10 + i;
			}
			for (int i = 0; i < size; i += 1) {
				printf(" %d", parr[i]);
			}
		}
		else printf("�����Ҵ� ����\n");
	}
	if (parr != NULL) {
		// �����Ҵ����� ���� �迭�� �Ҵ���� ������ �̿��ؼ� �����ϸ� �ȴ�.
		free(parr);
	}
}
int main(void) {
	single_variable();
	array_variable();
	return 0;
}