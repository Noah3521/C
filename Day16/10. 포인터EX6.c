#include <stdio.h>

int main(void) {
	char word[15] = "";
	// 한글기준 - 최대  7글자
	// 영어기준 - 최대 14글자
	int size = sizeof(word) / sizeof(char);
	char* pword = word;
	printf("최대 %d글자의 단어 입력 >> ", size - 1);
	scanf_s("%s", pword, size);
	printf("입력된 단어 : %s\n", pword);
	return 0;
}