#include <stdio.h>

int main(void) {
	// 산술연산의 함정 : 0으로 나누기 / 몫구하기
	// 실수를 0으로 나누면 결과로 inf가 뜬다.
	// printf("%.2f\n", 3.14 / num);
	// 정수를 0으로 나누거나 나머지를 구하면 프로그램이 터진다.
	// printf("%d\n", 3 % num);
	int num1 = 0;
	int num2 = 0;
	double result;
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("결과 : ");
	if (num2 == 0) printf("연산불가\n");
	else {
		result = num1 / (double)num2;
		/*
		if (num1 % num2 == 0) {
			printf("%.0f\n", result);
		}
		else {
			printf("%.1f\n", result);
		}
		*/
		// 값의 선택만 필요할 경우 사용하는 제어문과 비슷한 연산자
		// - 조건연산자( 삼항 연산자 )
		// - 연산식 구성 -> ( 조건식 ) ? 참일때값 : 거짓일때 값
		// - 값만 선택하고, if/else만 구현된다.
		printf(((num1 % num2 == 0) ? "%.0f\n" : "%.1f\n"), result);
		// 장점 : 조건문을 줄일 수 있고, 조건문보다 처리속도가 빠르다.
		// 단점 : 융통성이 없고, 값(하나)만 선택하는 편이 정신건강에 좋음.
	}
	return 0;
}