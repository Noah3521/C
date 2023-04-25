#include <stdio.h>
int input_num(void) {
	int num = 0;
	printf("출력할 정수 하나 >> ");
	scanf_s("%d", &num);
	return num;
}
void odd_program(void) {
	int num = 0;
	printf("출력할 정수 하나 >> ");
	scanf_s("%d", &num);
	if (num % 2 == 0) num++;
	printf("짜잔~! 홀수 %d입니다.\n", num);
}
int get_odd(void) {
	int num = 0;
	printf("출력할 정수 하나 >> ");
	scanf_s("%d", &num);
	if (num % 2 == 0) num++;
	return num;
}

int main(void) {
	/*
	// 1) 4형식 함수입니다.
	//    정수값 하나를 입력을 받아 홀수로 출력하는 함수를
	//    정의하세요.
	//    짝수일 경우 1만큼 증가시켜서 바꾸세요.
	
	// 2) 위 함수를 3형식으로 바꾼 함수를 정의하세요.

	// 3) 실행 코드는 스스로 결과를 검증할 수 있도록
	//    적절하게 구성하세요.
	*/
	odd_program();
	int num1 = get_odd();
	int num2 = get_odd();
	printf("홀수와 홀수 합 : %d\n", num1 + num2);
	return 0;
}