#include <stdio.h>
int make_expo(int num, int count) {
	int result = 1;
	while (count > 0) {
		result *= num;
		count -= 1;
	}
	return result;
}

int main(void){
	// 거듭제곱은, 음수라면 무조건 실수결과가 나온다.
	// - C언어에서는 이를 따로 만들어줘야 된다.
	printf("결과1 : %d\n", make_expo( 2,	  4));
	printf("결과2 : %d\n", make_expo( 3,  4));
	printf("결과3 : %d\n", make_expo( 9,  0));
	printf("결과4 : %d\n", make_expo(-2,  6));
	printf("결과5 : %d\n", make_expo( 2, -5));
	return 0;
}