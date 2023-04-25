#include <stdio.h>

int main(void) {
	int num = 123;
	double fnum = 3.456;
	char word[100] = "Apple";
	// 값의 형태를 바꾸는게 목적이면, 서식문자에 서식을 적용한다.
	printf("%.3d%.4d%.5d\n", num, num, num);
	
	// 전반적인 출력형태라면, 서식문자를 적용해 서식을 만든다.
	printf("%d0%d00%d\n", num, num, num);
	
	printf("%.1f -> %.2f -> %.3f\n", fnum, fnum, fnum);
	printf("%.1s -> %.3s -> %.5s\n", word, word, word);
	return 0;
}