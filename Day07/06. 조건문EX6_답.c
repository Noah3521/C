#include <stdio.h>

int main(void) {
	double result = 0;
	double value = 5;
	
	printf("실수 하나 입력 >> ");
	scanf_s("%lf", &result);
	
	if (result <= 0) value = 0.2;
	result = result * value;

	printf("연산결과 : %.2f\n", result);
	return 0;
}