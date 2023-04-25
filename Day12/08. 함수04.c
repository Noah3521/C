#include <stdio.h>

// 1형식 : 반환형과 매개변수를 모두 가지고 있다.
// - 전달 -> 처리 -> 전달이 되는 함수. 연산/처리만 수행한다.
// 주의사항
// - 1) 단순연산은 만들지 않는다.
// - 2) 문자열은 반환시킬 수 없음
// - 3) 함수 이름에 주의할 것 : make, create, copy, swap 등 만든다, 복사한다고 구분
int make_sum(int num1, int num2) {
	return num1 + num2;
}

int main(void) {
	// 1형식의 호출 : 값이 필요한 곳에 배치하여, 값을 넣어서 호출한다.
	int num1 = 0;
	int num2 = 0;
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("결과 : %d\n", make_sum(num1, num2));
	return 0;
}