#include <stdio.h>

void calculator(void) {
	int num1 = 0;
	int num2 = 0;
	printf("정수1 입력 >> "); scanf_s("%d", &num1);
	printf("정수2 입력 >> "); scanf_s("%d", &num2);
	printf("합 : %d\n", num1 + num2);
	printf("차 : %d\n", num1 - num2);
	printf("곱 : %d\n", num1 * num2);
	printf("몫 : ");
	if (num2 == 0)	printf("연산불가\n");
	else {
		printf("%d", num1 / num2);
		if (num1 % num2 != 0) printf(".%d", ((num1 % num2) * 10) / num2);
		printf("\n");
	}
}

int main(void) {
	calculator();
	return 0;
}