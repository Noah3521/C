#include <stdio.h>

int main(void) {
	/*
	�߰�����.���� �Է��� ���� �ŵ������� ���ϴ� �ڵ带 �ۼ��ϼ���.
	�ŵ������� ���� ������, �ŵ����� Ƚ���� �Է��� �޽��ϴ�.
	�ŵ����� Ƚ���� 0�̻��̸� ��������̰�
	�ŵ����� Ƚ���� 0�̸��̸� �Ǽ�����̸�
	�Ҽ��� 10�ڸ����� ����մϴ�.
	*/
	int num = 0;
	int count = 0;
	int result1 = 1;
	double result2 = 1;
	printf("���� �� �ŵ������ΰ���? ");
	scanf_s("%d", &num);
	scanf_s("%d", &count);
	
	/*
	int copy_count = count;
	if (count < 0) copy_count *= -1;
	while (copy_count > 0) {
		if (count < 0) result2 /= num;
		else result1 *= num;
		copy_count -= 1;
	}
	if (count >= 0) printf("%d\n", result1);
	else printf("%.10f\n", result2);
	*/

	printf("��� : ");
	if (count >= 0) {
		while (count > 0) {
			result1 *= num;
			count -= 1;
		}
		printf("%d\n", result1);
	}
	else {
		while (count < 0) {
			result2 /= num;
			count += 1;
		}
		printf("%.10f\n", result2);
	}
	return 0;
}