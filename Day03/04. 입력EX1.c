#include <stdio.h>

int main(void) {
	// 변수의 종류는 나중에 사용 목적에 따라서 알맞게 준비한다.
	// 이때 변수가 뭘 저장할 수 있는지 알고 있어야 합니다.
	char name[100] = "";
	int age = 0;
	char hobby[100] = "";
	printf("이름을 입력하세요 >> ");
	scanf_s("");
	printf("나이를 입력하세요 >> ");
	scanf_s("");
	printf("취미를 입력하세요 >> ");
	scanf_s("");

	printf("\n당신의 정보\n");
	printf("");
	return 0;
}