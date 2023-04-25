#include <stdio.h>

void show_bigger(int num1, int num2) {
	int max = 0;
	if (num1 == num2) printf("서로 같은 값 : %d\n", num1);
	else {
		if (num1 > num2) max = num1;
		else max = num2;
		printf("제일 큰 값 : %d\n", max);
	}
}

int main(void) {
	show_bigger(15, 4);
	show_bigger(4, 15);
	show_bigger(4, 4);
	return 0;
}