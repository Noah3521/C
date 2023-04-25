#include <stdio.h>

int change(int num) {
	if (num % 2 == 0) return num + 1;
	else return num - 1;
}

int main(void) {
	printf("결과1 : %d\n", change(13));
	printf("결과2 : %d\n", change(16));
	printf("결과3 : %d\n", change(-13));
	printf("결과4 : %d\n", change(-16));
	return 0;
}