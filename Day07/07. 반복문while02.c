#include <stdio.h>

int main(void) {
	// ���ѹݺ� : ������ ���� ��ȭ�� �̿���
	//           �ʿ��� ���� �غ��ϰų�, �ݺ�Ƚ���� Ȯ���Ѵ�.

	// ���ѹݺ� ����¹� : ��Ģ���� �ľ��Ѵ�.
	// 1. �������� ���� / �۵��� �ڵ带 �׳� �ۼ��Ѵ�.
	/*
	printf("1 2 3 4 5 6 7 8 9 10\n");
	*/
	// 2. ���� �԰��� �ǵ��� �����Ѵ�.
	/*
	printf("1 "); // 1 ~ 10�� ����ϴ� �ڵ尡 �ݺ� ���
	printf("2 ");
	printf("3 ");
	printf("4 ");
	printf("5 ");
	printf("6 ");
	printf("7 ");
	printf("8 ");
	printf("9 ");
	printf("10 ");
	printf("\n"); // �ݺ� ����� �ƴ�
	*/
	// 3. ������ �̿��ؼ� ���� ����� �ڵ尡 �ǵ��� ��ģ��.
	//    + ���մ��Կ����ڸ� �̿��� �غ��� ������ ��ģ��.
	/*
	int num = 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("\n");
	*/
	// 4. �����Ѵ�. �� : �ݺ�Ƚ���� �ĺ��ϱ� ���� ���� �ϳ������� ���ǽ��� �����Ѵ�.
	int num = 1;
	while (num <= 10) {
		printf("%d ", num);
		num += 1;
	} printf("\n");

	// �ܼ� �ݺ��̶� ��ȭ�� ���� ��� : ���Ƿ� �����ϸ� �ȴ�.
	// - ���Ƿ� ������ ���� ���ؼ� ���� ������ �Ȱ��� ������ �ȴ�.
	int num1 = 1;
	while (num1 <= 5) {
		printf("Hi~! ");
		num1 += 1;
	} printf("\n");
	return 0;
}