#include <stdio.h>

void printf_explain(void) {
	// printf의 내부구조 : 문자열의 끝을 만날 때까지 반복을 수행한다.
	// - 조건식은 지정한 인덱스의 변수에 저장된 값이 0인지 여부를 체크
	char word[6] = "Apple";
	// printf("%s", word);
	for (int i = 0; word[i] != 0; i += 1) {
		putchar(word[i]); // 문자 하나만 출력하는 함수
	}
}
void scanf_expain(void) {
	// scanf : 무제한으로 입력받아 저장공간을 초과해서 저장한다.
	// + 기존에 입력했던 것을 그대로 남겨둔다.
	// scanf_s : 배열의 크기를 초과하면 저장을 안함
	// + 기존에 입력했던 것을 몽땅 비워버린다.
	char word1[10] = "123456789";
	char word2[10] = "ABCDEFGHI";
	printf("입력 >> ");
	// scanf_s("%s", word2, sizeof(word1) / sizeof(char));
	// %s인 경우의 내부구조
	for (int i = 0; i < sizeof(word1) / sizeof(char); i += 1) {
		char tmp = getchar(); // 뭐가 되었던 문자로 입력받는 함수
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
	printf("결과1 : %s\n", word1);
	printf("결과2 : %s\n", word2);
}
void string_copy1(void) {
	char word1[6] = "Apple";
	// 1. 글자수 및 크기가 서로 같은 경우 : 크기가 같으니 아무거나로 반복통제
	char word2[6];
	for (int i = 0; i < 6; i += 1) {
		word2[i] = word1[i];
	}
	printf("%s %s\n", word1, word2);
	// 2. 복사받는 공간의 크기가 큰 경우 : 더 작은 쪽으로 통제한다.
	char word3[11];
	for (int i = 0; i < sizeof(word1) / sizeof(char); i += 1) {
		word3[i] = word1[i];
	}
	printf("%s %s\n", word1, word3);
	// ※ 더 작은 공간에는 애초에 복사를 안함
}
void string_copy2(void) {
	char word4[11] = "Apple";
	// 공간의 크기와 실제 저장되는 값은 문자열에서는, 일치하지 않는다.
	// -> 저장된 값의 수량을 구해야 한다.
	int count = 0;
	while (word4[count] != 0) {
		count += 1;
	}
	// 수량을 구한 다음, 저장공간의 크기와 비교를 한다.
	char word5[4];
	if (sizeof(word5) / sizeof(char) < count + 1) {
		printf("저장을 위한 공간의 크기가 모자르니 저장 불가\n");
	}
	char word6[11];
	if (sizeof(word6) / sizeof(char) >= count + 1) {
		printf("공간이 넉넉하니 저장할 수 있고, 복사가 가능\n");
	}
}

int main(void) {
	// printf_explain();
	// scanf_expain();
	string_copy1();
	string_copy2();
	return 0;
}