#include <stdio.h>

int main(void) {
	// 1. while 반복문
	// - while의 기본 베이스는 변수에 저장된 값을 갈아버린다.
	// - 현재 회차와 다음회차가 이어지도록 만들어야 한다.

	// 이중반복문을 구성할 때 특징
	// - 1) 전체반복을 위한 변수/연관된 것
	// - 2) 반복횟수에 집중한다.

	// 구성과정에서 함정에 주의할 것
	// - 1) 숫자의 규칙성으로 들어가면 굉장히 어려워진다.
	// - 2) 특정 코드가 반복되는 횟수에 집중해야 한다.
	// - 3) while이 내부에 종속문으로 들어가면, 내부 while을 위한 변수의 값은
	//      매 반복마다 반복을 할 수 있도록 조절해줘야 한다.
	int num1 = 1;
	int value = 1;
	while (value <= 3) {
		int count = value;
		while (count > 0) {
			printf("%d ", num1);
			num1 += 1;
			count -= 1;
		}
		printf("\n");
		value += 1;
	}
	return 0;
}