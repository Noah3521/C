#include <stdio.h>

int main(void) {
	char ch1 = 0; char ch2 = 0; char ch3 = 0;
	printf("문자1 입력 >> ");
	scanf_s(" %c", &ch1, 1);
	printf("문자2 입력 >> ");
	scanf_s(" %c", &ch2, 1);
	printf("문자3 입력 >> ");
	scanf_s(" %c", &ch3, 1);

	printf("입력된 문자\n");
	printf("  01234567890\n");
	printf("->%5c%c%-5c<-\n", ch1, ch2, ch3);
	return 0;
}