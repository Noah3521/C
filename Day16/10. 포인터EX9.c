#include <stdio.h>

void get_sum(int* parr, int size, int* result) {
	for (int i = 0; i < size; i += 1) {
		*result += parr[i];
	}
}

int main(void) {
	int arr[4] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	int result = 0;
	
	for (int i = 0; i < size; i += 1) {
		printf("%d¹ø >> ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	get_sum(arr, size, &result);
	printf("ÇÕ : %d\n", result);
	return 0;
}