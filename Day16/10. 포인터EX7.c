#include <stdio.h>

void init2var(int* pnum, double* pfnum) {
	*pnum = 10;		// 변수가 공유되면 함수의 반환형과 관계없이
	*pfnum = 3.14;	// 값을 반환시킬 수 있다.
}

int main(void) {
	int num = 0;
	double fnum = 0;
	init2var(&num, &fnum);
	printf("%d, %.2f\n", num, fnum);
	return 0;
}