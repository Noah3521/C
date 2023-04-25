#include <stdio.h>

int main(void) {
	// 0을 넣어두는건, 입력받을 변수라서 넣어둔 것이고
	// 입력안받으면 필요한 값 바로 넣어두면 됩니다.
	int num1 = 100;
	double fnum1 = 3.14;
	
	// 변수를 사용할 경우, 연관된 곳에 철저하게 적용한다.
	printf("%d + %.2f = %.2f\n", num1, fnum1, num1 + fnum1);
	printf("%d - %.2f = %.2f\n", num1, fnum1, num1 - fnum1);
	
	// 소수점은 필요할 경우 전부 '숨길' 수 있다.
	printf("%d * %.2f = %.0f\n", num1, fnum1, num1 * fnum1);
	printf("%d / %.2f = %.2f\n", num1, fnum1, num1 / fnum1);
	return 0;
}