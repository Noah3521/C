#include <stdio.h>

int main(void) {
	double arr[6] = { 0 };
	double result = 0;
	int size = sizeof(arr) / sizeof(double);
	for (int i = 0; i < size; i += 1) {
		printf("%d번 값 >> ", i + 1);
		scanf_s("%lf", &arr[i]);
	}
	for (int i = 0; i < size; i += 1) {
		result += arr[i];
	}
	printf("입력된 값 :");
	for (int i = 0; i < size; i += 1) {
		printf(" %.1f", arr[i]);
		if (i != size - 1) printf(",");
		else printf("\n");
	}
	printf("값들의 합 : %.1f\n", result);
	
	return 0;
}