#include <stdio.h>

int change(int num) {
	if (num % 2 == 0) return num + 1;
	else return num - 1;
}

int main(void) {
	printf("���1 : %d\n", change(13));
	printf("���2 : %d\n", change(16));
	printf("���3 : %d\n", change(-13));
	printf("���4 : %d\n", change(-16));
	return 0;
}