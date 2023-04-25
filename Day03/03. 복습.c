#include <stdio.h>

int main(void) {
	// 프로그램 : 자료 -> 처리 -> 정보
	// 변수선언 : 자료를 수집할 수 있는 공간을 준비
	char ch = 'A';
	int num = 123;
	double fnum = 3.14;
	char word[100] = "Air";
	// 출력 : 필요한 곳에 필요한 형태로 전달하는 것
	// - 서식 : 서식문자가 적용된 문자열
	// - 서식문자 : 값을 화면에 보여주는 형태
	printf("이것은 %c 입니다.\n", ch);
	printf("이건 %d, %f 입니다.\n", num, fnum);
	printf("단어 : %s\n", word);
	return 0;
}