#include <stdio.h>

void printf_explain(void) {
	// printf�� ���α��� : ���ڿ��� ���� ���� ������ �ݺ��� �����Ѵ�.
	// - ���ǽ��� ������ �ε����� ������ ����� ���� 0���� ���θ� üũ
	char word[6] = "Apple";
	// printf("%s", word);
	for (int i = 0; word[i] != 0; i += 1) {
		putchar(word[i]); // ���� �ϳ��� ����ϴ� �Լ�
	}
}
void scanf_expain(void) {
	// scanf : ���������� �Է¹޾� ��������� �ʰ��ؼ� �����Ѵ�.
	// + ������ �Է��ߴ� ���� �״�� ���ܵд�.
	// scanf_s : �迭�� ũ�⸦ �ʰ��ϸ� ������ ����
	// + ������ �Է��ߴ� ���� ���� ���������.
	char word1[10] = "123456789";
	char word2[10] = "ABCDEFGHI";
	printf("�Է� >> ");
	// scanf_s("%s", word2, sizeof(word1) / sizeof(char));
	// %s�� ����� ���α���
	for (int i = 0; i < sizeof(word1) / sizeof(char); i += 1) {
		char tmp = getchar(); // ���� �Ǿ��� ���ڷ� �Է¹޴� �Լ�
		if (tmp == ' ' || tmp == '\n' || tmp == '\t') {
			word1[i] = 0;
			break;
		}
		else if (i == sizeof(word1) / sizeof(char) - 1) {
			word1[i] = 0;
			break;
		}
		else word1[i] = tmp;
	}
	printf("���1 : %s\n", word1);
	printf("���2 : %s\n", word2);
}
void string_copy1(void) {
	char word1[6] = "Apple";
	// 1. ���ڼ� �� ũ�Ⱑ ���� ���� ��� : ũ�Ⱑ ������ �ƹ��ų��� �ݺ�����
	char word2[6];
	for (int i = 0; i < 6; i += 1) {
		word2[i] = word1[i];
	}
	printf("%s %s\n", word1, word2);
	// 2. ����޴� ������ ũ�Ⱑ ū ��� : �� ���� ������ �����Ѵ�.
	char word3[11];
	for (int i = 0; i < sizeof(word1) / sizeof(char); i += 1) {
		word3[i] = word1[i];
	}
	printf("%s %s\n", word1, word3);
	// �� �� ���� �������� ���ʿ� ���縦 ����
}
void string_copy2(void) {
	char word4[11] = "Apple";
	// ������ ũ��� ���� ����Ǵ� ���� ���ڿ�������, ��ġ���� �ʴ´�.
	// -> ����� ���� ������ ���ؾ� �Ѵ�.
	int count = 0;
	while (word4[count] != 0) {
		count += 1;
	}
	// ������ ���� ����, ��������� ũ��� �񱳸� �Ѵ�.
	char word5[4];
	if (sizeof(word5) / sizeof(char) < count + 1) {
		printf("������ ���� ������ ũ�Ⱑ ���ڸ��� ���� �Ұ�\n");
	}
	char word6[11];
	if (sizeof(word6) / sizeof(char) >= count + 1) {
		printf("������ �˳��ϴ� ������ �� �ְ�, ���簡 ����\n");
	}
}

int main(void) {
	// printf_explain();
	// scanf_expain();
	string_copy1();
	string_copy2();
	return 0;
}