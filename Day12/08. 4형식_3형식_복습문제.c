#include <stdio.h>
int input_num(void) {
	int num = 0;
	printf("����� ���� �ϳ� >> ");
	scanf_s("%d", &num);
	return num;
}
void odd_program(void) {
	int num = 0;
	printf("����� ���� �ϳ� >> ");
	scanf_s("%d", &num);
	if (num % 2 == 0) num++;
	printf("¥��~! Ȧ�� %d�Դϴ�.\n", num);
}
int get_odd(void) {
	int num = 0;
	printf("����� ���� �ϳ� >> ");
	scanf_s("%d", &num);
	if (num % 2 == 0) num++;
	return num;
}

int main(void) {
	/*
	// 1) 4���� �Լ��Դϴ�.
	//    ������ �ϳ��� �Է��� �޾� Ȧ���� ����ϴ� �Լ���
	//    �����ϼ���.
	//    ¦���� ��� 1��ŭ �������Ѽ� �ٲټ���.
	
	// 2) �� �Լ��� 3�������� �ٲ� �Լ��� �����ϼ���.

	// 3) ���� �ڵ�� ������ ����� ������ �� �ֵ���
	//    �����ϰ� �����ϼ���.
	*/
	odd_program();
	int num1 = get_odd();
	int num2 = get_odd();
	printf("Ȧ���� Ȧ�� �� : %d\n", num1 + num2);
	return 0;
}