#include <stdio.h>

int main(void) {
	double result = 0;
	double value = 5;
	
	printf("�Ǽ� �ϳ� �Է� >> ");
	scanf_s("%lf", &result);
	
	if (result <= 0) value = 0.2;
	result = result * value;

	printf("������ : %.2f\n", result);
	return 0;
}