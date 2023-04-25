#include <stdio.h>

int main(void) {
	// 1. 정수끼리는 '평균'을 구할 수 없다.
	// - 구할려면, 나머지와 몫연산을 계속 해줘야 한다.
	// 2. 실수값만 존재한다면, '평균'을 구할 수 있다.
	// - 몫연산은 실수값이 있으면 연산종류가 바뀌었음.
	// 3. 자료형으로 인해 제한되는 연산은 자료형만 바꾸면 가능하다.
	// - 형변환 연산자를 붙여서 이용한다.
	
	int num1 = 10;
	int num2 = 21;
	int count = 2;
	// ※ 강제형변환 : 필요한 곳에서 형변환 연산자를 이용해 자료형을 잠시 바꾸는 것
	// 정수 -> 실수 : .0만 붙는다.
	// 실수 -> 정수 : 소수점을 몽땅 버림처리.
	printf("두 정수의 평균 : %.2f\n", (double)(num1 + num2) / (double)count);
	int num = (int)9.3;
	double fnum = (double)0;
	printf("결과 : %d, %.2f\n", num, fnum);

	// ※ 자동형변환(규칙 - 문법) : 미리 설정된 규칙에 따라서 작동하는 방식.
	printf("두 정수의 평균 : %.2f\n", (num1 + num2) / (double)count);
	int _num = 9.3;		// 대입연산의 규칙
	double _fnum = 0;	// - 저장하는 변수에 맞춰서 지원되는 것은 강제로 바꾼다.
	printf("결과 : %d, %.2f\n", _num, _fnum);
	return 0;
}