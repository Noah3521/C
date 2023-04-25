#include <stdio.h>

int main(void) {
	// 문자열 값으로써의 특징 : 몽땅 배열이다.
	// - 공간도 알맞게 준비해야 한다.
	// - 저장할 값이 있으면 알아서 계산해주니, 이를 바탕으로 설정
	// 원칙
	char word1[6] = { 'A','p','p','l','e' };
	// 자동처리
	char word2[6] = "Apple";
	/*
	char word3[6];
	word3[0] = "Apple"[0];
	word3[1] = "Apple"[1];
	word3[2] = "Apple"[2];
	word3[3] = "Apple"[3];
	word3[4] = "Apple"[4];
	word3[5] = "Apple"[5];
	printf("%s\n", word3);
	*/
	printf("%s\n", word1);
	printf("%s\n", word2);
	
	// 문자열의 문제점 : 공간 크기 계산이 어렵다.
	// 문자는 -128 ~ + 127짜리 정수값 변수이다.
	// 숫자 <-> 문자 변환체계인 ASCII코드를 이용한다.
	// - 키보드상의 영어문자/숫자/특수문자 외에는 전부 범위 외의 값이다.
	// - 변수 2개씩 이용해서 저장한다.
	// ex) 20일 경우, 한글 9글자 / 영어 19글자 가능
	// ex) 21일 경우, 한글 10글자 / 영어 20글자 가능
	char word4[11] = "다섯글자만";	// (11 - 1) / 2
	char word5[9] = "ABCDEFGH";		// (9 - 1) / 1
	char word6[8] = "세글자";		// (8 - 1) / 2
	char word7[13] = "한글ABCDEFGH";	// 13 - 1 == 2 * 2 + 1 * 8
	printf("%s\n%s\n%s\n%s\n", word4, word5, word6, word7);
	return 0;
}