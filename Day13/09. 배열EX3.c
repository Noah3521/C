#include <stdio.h>

int main(void) {
	// 배열은 절대로 배열변수로는 복사할 수 없음.
	// -> 정확하게 개별변수에 있는 것을 1대1로 몽땅 복사해야 함
	double farr1[4] = { 0 };
	double farr2[4] = { 0 };
	printf("실수값 4개 입력 >> ");
	scanf_s("%lf", &farr1[0]);
	scanf_s("%lf", &farr1[1]);
	scanf_s("%lf", &farr1[2]);
	scanf_s("%lf", &farr1[3]);
	// 배열의 복사는 배열을 구성하는 변수를 하나씩 다 찍어서 동일한 위치에
	// 넣어줘야 한다.
	farr2[0] = farr1[0];
	farr2[1] = farr1[1];
	farr2[2] = farr1[2];
	farr2[3] = farr1[3];
	printf("첫번째\t두번째\n");
	printf("%.2f\t%.2f\n", farr1[0], farr2[0]);
	printf("%.2f\t%.2f\n", farr1[1], farr2[1]);
	printf("%.2f\t%.2f\n", farr1[2], farr2[2]);
	printf("%.2f\t%.2f\n", farr1[3], farr2[3]);
	return 0;
}