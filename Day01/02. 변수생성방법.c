#include <stdio.h>

int main(void) {
	// 변수의 생성은 중괄호 내에서 한다.
	// 변수의 선언 : 공간을 요청하는 작업이기에 "선언"이라 표현한다.
	
	// ※ 올바른 변수명 예시
	// 1. 변수명은 최소한 값의 종류가 식별되도록 붙인다.
	char ch1; char ch2; char ch3; char ch4; char ch5;
	// 2. 종류가 식별되는 적당한 명사(단어)를 붙여도 된다.
	int score1; int score2;
	int count1; int count2;
	// 3. 종류가 식별되고 있다면, 마지막에 쓴다/결론이다 등의 표현도 가능
	double result;
	double varLastUsed;

	// ※ 올바르지 않은 변수명 예시
	// 1. 단문자, asd, zxc, qwe같은거 쓰지 말 것
	/*
	char a; int asd; double kkk;
	*/

	// 2. 변수명은 숫자부터 시작할 수 없고, 특수문자 사용불가
	/*
	int 1stScore;
	double _fnum; // _ 는 특별하게 허용됨. 그 외에는 불가.
	*/

	// 3. 중복은 절대로 안됨. 변수외의 다양한 것들이 존재하니 주의...
	// - 종류에는, 변수, 예약어, 특정 기능을 수행하는 함수 등...
	/*
	int result;
	*/
	
	return 0;
}