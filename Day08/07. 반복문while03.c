#include <stdio.h>

int main(void) {
	// while을 이용한 처리 : 누적연산
	// - 같은 변수에 새로운 값을 계속 저장한다.
	// - 복합대입연산자를 이용하여 구현한다.
	
	// 기본지식 : 특이한 것을 빼곤 모두 이항연산이다.
	// - 하나씩 뺀다.

	// ※ 곱셈은 많은 경우 1, 덧셈/뺄셈은 0을 기본값으로 준비한다.
	// ※ 나누기(몫구하기)와 나머지는 반복횟수로 통제한다.
	int result1 = 1;
	int num1 = 1;
	while (num1 <= 5) {
		result1 *= num1;	// 1씩 증가하는 값을 누적연산
		num1 += 1;			// 1씩 증가하는 누적연산
	}
	// 숫자만 준비할 수 있으면 감소하던 증가하던 별 상관없음.
	// "과정"은 다르지만, "결과"는 같다.
	int result2 = 1;
	int num2 = 5;
	while (num2 >= 1) {
		result2 *= num2;
		num2 -= 1;
	}
	printf("%d %d\n", result1, result2);
	return 0;
}