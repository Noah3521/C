#include <stdio.h>

int main(void) {
	char ch1 = 0; char ch2 = 0; char ch3 = 0;
	printf("����1 �Է� >> ");
	scanf_s(" %c", &ch1, 1);
	printf("����2 �Է� >> ");
	scanf_s(" %c", &ch2, 1);
	printf("����3 �Է� >> ");
	scanf_s(" %c", &ch3, 1);

	printf("�Էµ� ����\n");
	printf("  01234567890\n");
	printf("->%5c%c%-5c<-\n", ch1, ch2, ch3);
	return 0;
}