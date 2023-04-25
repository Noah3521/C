#include <stdio.h>
// �Ű������� �Ϲݺ��� : ���� �����ϴ� ���
int make_sum1(int num) {
	int result = 0;
	while (num > 0) {
		result += num;
		num -= 1;
	}
	return result;
}
// �Ű������� �����ͺ��� : ������ �����ϱ� ������, return�� ��ġ�� �ʾƵ� return�Ǵ� ȿ���� �����.
int make_sum2(int* pnum) {
	int result = 0;
	while (*pnum > 0) {
		result += *pnum;
		*pnum -= 1;
	}
	return result;
}
// �Ϲݺ����� ���� �ʿ��ϸ� ����� �����͸� ���� �ʴ´�.
void change(int* n1, int* n2) {
	*n1 += 5; *n2 += 10;
	printf("�Լ����� ����� ��� : %d, %d\n", *n1, *n2);
}

void single_variable(void) {
	// �������� �� ���ó�� ���� �ٸ� ������ �̿��ҷ��� �� ��....
	// - ȣ��Ǵ� ������ �״�� �۵��ϴ� �ڵ尡 ���Ǵ� ��찡 ����.
	// - �Լ��� ���� ��, �ڵ带 �������� �� �����ؾ� �ȴ�.
	int result = 0;
	int num = 10;
	result = make_sum1(num);
	printf("%d %d\n", num, result);
	result = make_sum2(&num);
	printf("%d %d\n", num, result);
	change(&num, &result);
	printf("%d %d\n", num, result);
}

// �迭�� ���ʿ� ������ü�� �ȵǴ� �����̱� ������...
// �̸� �ݵ�� �����ؼ� ��� �ϰ�, ���ڿ��� �����ϰ�
// �׻� �� ũ�⸦ ���޹޾Ƽ� ����Ǿ�� �Ѵ�.
void input_arr(char* msg, int* parr, int size) {
	printf(msg, size);
	for (int i = 0; i < size; i += 1) {
		scanf_s("%d", &parr[i]);
	}
}
int make_sum(int* parr, int size) {
	int result = 0;
	for (int i = 0; i < size; i += 1) {
		result += parr[i];
	}
	return result;
}
void show_values(char* msg, int* parr, int size) {
	printf(msg);
	for (int i = 0; i < size; i += 1) {
		printf(" %d", parr[i]);
	} printf("\n");
}

void arr_variable(void) {
	int arr[6] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	int result = 0;
	input_arr("%d���� �� �Է� >> ", arr, size);
	/*
	printf("%d���� �� �Է� >> ", size);
	for (int i = 0; i < size; i += 1) {
		scanf_s("%d", &arr[i]);
	}
	*/
	result = make_sum(arr, size);
	/*
	for (int i = 0; i < size; i += 1) {
		result += arr[i];
	}
	*/
	show_values("�Էµ� ����\n", arr, size);
	/*
	printf("�Էµ� ����\n");
	for (int i = 0; i < size; i += 1) {
		printf(" %d", arr[i]);
	} printf("\n");
	*/
	printf("�� : %d\n", result);
}
int main(void) {
	single_variable();
	arr_variable();
	return 0;
}