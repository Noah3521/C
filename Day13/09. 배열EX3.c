#include <stdio.h>

int main(void) {
	// �迭�� ����� �迭�����δ� ������ �� ����.
	// -> ��Ȯ�ϰ� ���������� �ִ� ���� 1��1�� ���� �����ؾ� ��
	double farr1[4] = { 0 };
	double farr2[4] = { 0 };
	printf("�Ǽ��� 4�� �Է� >> ");
	scanf_s("%lf", &farr1[0]);
	scanf_s("%lf", &farr1[1]);
	scanf_s("%lf", &farr1[2]);
	scanf_s("%lf", &farr1[3]);
	// �迭�� ����� �迭�� �����ϴ� ������ �ϳ��� �� �� ������ ��ġ��
	// �־���� �Ѵ�.
	farr2[0] = farr1[0];
	farr2[1] = farr1[1];
	farr2[2] = farr1[2];
	farr2[3] = farr1[3];
	printf("ù��°\t�ι�°\n");
	printf("%.2f\t%.2f\n", farr1[0], farr2[0]);
	printf("%.2f\t%.2f\n", farr1[1], farr2[1]);
	printf("%.2f\t%.2f\n", farr1[2], farr2[2]);
	printf("%.2f\t%.2f\n", farr1[3], farr2[3]);
	return 0;
}