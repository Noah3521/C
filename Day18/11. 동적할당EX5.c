#include <stdio.h>
#include <malloc.h>

// �����Ҵ��� �ٷ� ���� �ʰ�, �׻� "������"�� �Ͽ� ����Ѵ�.
double* makeArr(int size) {
	double* parr = (double*)malloc(sizeof(double) * size);
	return parr;
}
int main(void) {
	int size = 0;
	double* parr = NULL;
	printf("�迭�� ũ�� �Է� >> ");
	scanf_s("%d", &size);
	// ���Կ����� : �����ʰ��� ���� ������ �����ϴ� ������.
	// Ư¡ - �����ϴ� ���� �������� �غ� �ȴ�.
	if (size <= 0) printf("�߸��� ũ���Դϴ�.\n");
	else if (!(parr = makeArr(size))) printf("�����Ҵ� �����Դϴ�.\n");
	else {
		for (int i = 0; i < size; i += 1) {
			parr[i] = 1.1 + 0.7 * i;
		}
		printf("�迭�� �ִ� ��\n");
		for (int i = 0; i < size; i += 1) {
			printf("%.1f ", parr[i]);
		} printf("\n");
	}
	if (parr != NULL) free(parr);
	return 0;
}