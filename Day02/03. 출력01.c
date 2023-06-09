#include <stdio.h>

int main(void) {
	// printf : 대상을 문자로 바꿔서 출력한다.

	// 1. 기본적인 사용방식
	// 문자열을 출력한다.
	printf("원하는 내용을 작성하면 되고, 수량제한 없음!");
	// 특징 : 줄바꿈이 필요하면 줄바꿈을 직접 넣어줘야 한다.
	// \n : 줄바꿈
	printf("\n새로운 내용을 또 작성할 수 있어요~!\n");
	
	// 문자열 변수에 저장된 것을 출력할 수 있다.
	char word[100] = "APPLE PIE~!";
	// 참고 - 문자열 변수는 초기화를 같이 해줘야만 저장 가능
	printf(word);
	return 0;
}