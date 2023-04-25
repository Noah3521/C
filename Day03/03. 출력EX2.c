#include <stdio.h>

int main(void) {
	// 코드는 언제나 간결하게 짧게, 심플하게....라는 것이 기본이다.
	double fnum1 = 13.1;
	double fnum2 = 13.2;
	double fnum3 = 13.3;
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	// +@ : 출력할 때 무리하게 한줄로 만들지말 것
	// - 1) 출력할 때는 한줄당 printf 한번으로 생각한다.
	// - 2) 줄바꿈을 안넣으면 한줄로 나오니 무조건 한줄로 만들 필요 없음
	//      출력하는 값을 최대 3~5개 정도로 조절하는 편이 알아보기 쉽다.
	printf("1 : %f\n2 : %f\n3 : %f\n%d, %d, %d\n", fnum1, fnum2, fnum3, num1, num2, num3);

	printf("1 : %f\n2 : %f\n3 : %f\n", fnum1, fnum2, fnum3);
	printf("%d, %d, %d\n", num1, num2, num3);
	return 0;
}