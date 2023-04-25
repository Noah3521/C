#include <stdio.h>

int main(void) {
	// 1. 아래의 코드를 반복으로 바꾸세요.
	// 참고 : 반복문 내부에 반복문이 하나 있는 2중 반복문
	printf("#\n");		// 1회 반복
	printf("##\n");		// 2회 반복	// 전체
	printf("###\n");	// 3회 반복	// 4회 반복
	printf("####\n");	// 4회 반복
	/*
	* 참고 코드
	printf("#");
	printf("\n");
	printf("#"); printf("#");
	printf("\n");
	printf("#"); printf("#"); printf("#");
	printf("\n");
	printf("#"); printf("#"); printf("#"); printf("#");
	printf("\n");
	*/
	
	// 2. 아래의 코드를 반복으로 바꾸세요.
	// 참고 : 반복문 내부에 서로 평등한 반복문이 2개 있는 2중 반복문
	printf("   #\n");	// 3회 반복 + 1회반복
	printf("  ##\n");	// 2회 반복 + 2회반복		// 전체
	printf(" ###\n");	// 1회 반복 + 3회반복		// 4회 반복
	printf("####\n");	// 0회 반복 + 4회반복
	/*
	* 참고 코드
	printf(" "); printf(" "); printf(" "); printf("#");
	printf("\n");
	printf(" "); printf(" "); printf("#"); printf("#");
	printf("\n");
	printf(" "); printf("#"); printf("#"); printf("#");
	printf("\n");
	printf("#"); printf("#"); printf("#"); printf("#");
	printf("\n");
	*/
	return 0;
}