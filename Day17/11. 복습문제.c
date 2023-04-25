#include <stdio.h>
#include <string.h> // ���ڿ��� ���� �ٷ�� ���� �Լ��� �ҷ��ɴϴ�.

void select_big(int* target, int num1, int num2) {
	if (num1 > num2)		*target = num1;
	else if (num2 > num1)	*target = num2;
	else					*target = 0;
}
void EX1(void) {
	// ��������1
	// ��ȯ������ ���޹��� ���� ũ�⸦ ���Ͽ� ���� ū ����
	// ������ ������ ���� ��ȯ�ϴ� �Լ��� �����ϼ���. ���� ���� ��� 0�� ���ɴϴ�.
	int result1;
	select_big(&result1, 19, 3); printf("���1-1 : %d\n", result1); // 19
	select_big(&result1, -5, -1); printf("���1-2 : %d\n", result1); // -1
	select_big(&result1, 3, 3); printf("���1-3 : %d\n", result1); //  0
}

void save_to(int* parr, int size, int num) {
	for (int i = 0; i < size; i += 1) {
		parr[i] = num * (i + 1);
	}
}
void EX2(void) {
	// ��������2
	// �迭�� ������ ������ ������� �����ϴ� �Լ��� �����ϼ���.
	// 8 16 24 32 40 48�� ��µ˴ϴ�.
	int arr[6];
	save_to(arr, sizeof(arr) / sizeof(int), 8);
	printf("���2\n");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i += 1) {
		printf(" %d", arr[i]);
	} printf("\n");
}

int count_word(char* pword) {
	int count = 0;
	while (pword[count] != 0) { count += 1; }
	return count;
}
void EX3(void) {
	char word1[15] = "ApplePie";
	char word2[10] = "Apple";
	printf("word1�� ���� : %d\n", sizeof(word1) / sizeof(char));
	printf("����� ������ ���� : %d\n", count_word(word1)); // 8
	printf("word2�� ���� : %d\n", sizeof(word2) / sizeof(char));
	printf("����� ������ ���� : %d\n", count_word(word2)); // 5
	/*
	// strlen : ���ڿ��� ���� ����ũ�⸦ �����ش�.
	char word1[10] = "ApplePie";
	char word2[8] = "Apple";
	char word3[6] = "Apple";
	// ���ڿ��� ���� Ȯ���Ͽ�, �ش� �������� �����.
	printf("%d %d %d\n", word1[8], word2[5], word3[5]);
	// �׷��� ���� ����� ���ڵ��� ������ üũ�� �� ����.
	printf("%d %d %d\n", strlen(word1), strlen(word2), strlen(word3));
	*/
}

void copy_str(char* dest, char* source) {
	// strcpy_s�� strlen ���� ���ο��� ����ϸ�, ���ǹ����� ���簡��/�Ұ��� ó���Ѵ�.
	// �� �������� ��Ȯ�ϰ� ����� ��ŭ�� �����Ͽ� �ݺ�Ƚ���� ���δ�.
	for (int i = 0; i < 9; i += 1) {
		dest[i] = source[i];
	}
}
void EX4(void) {
	char word1[9] = "ApplePie";
	char word2[9];
	copy_str(word2, word1);
	printf("%s\n", word1); // ApplePie
	printf("%s\n", word2); // ApplePie
	/*
	// strcpy_s : ���ڿ��� �����ϴ� �Լ�
	char word1[10] = "ApplePie";
	char word2[15]; char word3[9]; char word4[5];

	// 1. ������ ũ�Ⱑ �� ũ�� ����� ��ŭ�� ���� �����ϸ� ��
	strcpy_s(word2, sizeof(word2) / sizeof(char), word1);
	printf("word2 : %s\n", word2);

	// 2. ���� ����� ���� ũ�⺸�� ������ �� ũ�� �������� ����� - ���ڿ��� ������ �����.
	strcpy_s(word3, sizeof(word3) / sizeof(char), word1);
	printf("word3 : %s\n", word3);

	// 3. ����� ������ ������ ������ ���� ����. ���ǹ����� �����ؾ� �ȴ�.
	if (sizeof(word4) / sizeof(char) > strlen(word1)) {
		strcpy_s(word4, sizeof(word4) / sizeof(char), word1);
		printf("word4 : %s\n", word4);
	}
	else printf("����Ұ� : ��������� �ʹ� �۽��ϴ�.\n");
	*/
}

int main(void) {
	// EX1();
	// EX2();
	EX3();
	EX4();
	return 0;
}