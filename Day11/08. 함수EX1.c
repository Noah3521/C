#include <stdio.h>

void calculator(void) {
	int num1 = 0;
	int num2 = 0;
	printf("����1 �Է� >> "); scanf_s("%d", &num1);
	printf("����2 �Է� >> "); scanf_s("%d", &num2);
	printf("�� : %d\n", num1 + num2);
	printf("�� : %d\n", num1 - num2);
	printf("�� : %d\n", num1 * num2);
	printf("�� : ");
	if (num2 == 0)	printf("����Ұ�\n");
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