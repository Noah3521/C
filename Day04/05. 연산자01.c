#include <stdio.h>

int main(void) {
	// 대입연산자 : 값만 복사하는 연산자
	int num1 = 100;
	printf("num1 : %d\n", num1);
	num1 = 200; // 기존 값을 파괴하고 덮어쓰기 한다.
	printf("num1 : %d\n", num1);

	// 대입연산자 오른쪽에는 무조건 저장공간에 보관된 값만 불러온다.
	// ★ 값을 불러오는 과정 및 다른 연산은 대입연산보다 우선순위가 높다.
	int num2 = num1;
	printf("num1, num2 : %d, %d\n", num1, num2);
	// 대입연산자 왼쪽에는 값을 보관할 저장공간만 올 수 있다.
	num1 = 150;
	// 변수가 복사되는 일은 절대로 발생하지 않는다.
	printf("num1, num2 : %d, %d\n", num1, num2);
	return 0;
}