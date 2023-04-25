#include <stdio.h>

void show_arr(double* parr, int size) {
	for (int i = 0; i < size; i += 1) {
		printf("%.1f ", parr[i]);
	} printf("\n");
}

int main(void) {
	double arr[6];
	int size = sizeof(arr)/sizeof(double);
	for (int i = 0; i < size ; i += 1) {
		arr[i] = 1.1 * (i + 1);
	}
	printf("배열에 저장된 %d개의 값\n", size);
	show_arr(arr , size);
	/*
	for (int i = 0; i < size ; i += 1) {
		printf("%.1f ", arr[i]);
	} printf("\n");
	*/
	return 0;
}