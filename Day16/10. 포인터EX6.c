#include <stdio.h>

int main(void) {
	char word[15] = "";
	// �ѱ۱��� - �ִ�  7����
	// ������� - �ִ� 14����
	int size = sizeof(word) / sizeof(char);
	char* pword = word;
	printf("�ִ� %d������ �ܾ� �Է� >> ", size - 1);
	scanf_s("%s", pword, size);
	printf("�Էµ� �ܾ� : %s\n", pword);
	return 0;
}