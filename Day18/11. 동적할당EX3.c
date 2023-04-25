#include <stdio.h>
#include <malloc.h>

int main(void) {
	// 15바이트의 문자배열이라면...
	// 문자자료형은 1바이트이고, 15가 될려면 변수가 15개 있어야 합니다.
	int size = 15;
	char* pword = NULL;
	if (size > 0) {
		pword = (char*)malloc(sizeof(char) * size);
		if (pword != NULL) {
			printf("문자열 입력 >> ");
			scanf_s("%s", pword, size);
			printf("단어 : %s\n", pword);
		}
		else printf("배열 생성 실패\n");
	}
	else printf("잘못된 크기입니다.\n");

	if (pword != NULL) {
		free(pword);
	}
	return 0;
}