#include <stdio.h>
// 4형식 : 완결된 프로그램. 최소 정보(출력)만 있어도 됨.
void program1(void) {
	int num1 = 0; int num2 = 0;
	int result = 0;
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	result = num1 + num2;
	printf("두 정수의 합 : %d\n", result);
	printf("두 정수의 평균 : %.1f\n", result / 2.0);
}
// 3형식 : 가장 가치가 있는 하나의 값만 외부로 복사시켜주는 함수
// - 함수의 반환형은 return시키는 값의 종류를 식별하기 위한 정보
// - 미리 설정하지 않고, 마지막에 설정한다.
// - 3형식부터는 함수명이 동사로 설정된다.(get, input, push, put 등...)
int get_sum(void) {
	int num1 = 0; int num2 = 0;
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	// return : 함수를 종료시키는 명령어 겸 오른쪽의 값만 외부로 복사시키는 명령어
	return num1 + num2;
	// 주의사항1 : 함수 외부로 복사해주는 값은 특수한 방법이 아니면 하나만 가능하다.
	// 주의사항2 : 가장 가치가 있는 것은 함수에서 보여주지 않는다.
}
int main(void) {
	// 4형식 함수의 호출
	program1();
	// 3형식 함수의 호출 : 함수 내부에 있던 값이 사용된 곳으로 복사되고, 이를 이용한다.
	int result = get_sum();
	printf("함수에서 나온 결과를 복사 : %d\n", result);
	return 0;
}