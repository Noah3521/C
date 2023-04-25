#include <stdio.h>

int make_sum(int num1, int num2) {
	int result = 0;
	if (num1 > num2) { // 두 변수의 값을 바꾼다
		int tmp = num1;	// C에 A를 복사하고
		num1 = num2;	// A에 B를 복사하고
		num2 = tmp;		// B에 C를 복사한다
	}
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	return result;
}

int main(void) {
	// 1) 1형식으로 구간합을 구하는 함수를 정의하세요.
	// ex1) -3 부터  3일 경우 :  0
	// ex2) -3 부터  4일 경우 :  4
	// ex3)  4 부터 -4일 경우 :  0
	// ex4)  4 부터 -3일 경우 :  4
	// ex5)  1 부터 10일 경우 : 55
	// ex6) 10 부터  1일 경우 : 55
	// ex7)  5 부터  5일 경우 :  5

	// 2) 테스트 및 확인을 위한 코드를 직접 작성해서
	//    결과를 확인하세요.
	printf("2부터 10까지의 합 : %d\n", make_sum(2, 10));
	printf("1부터 10까지의 합 : %d\n", make_sum(1, 10));
	printf("-10부터 -2까지의 합 : %d\n", make_sum(-10, -2));
	printf("-10부터 -1까지의 합 : %d\n", make_sum(-10, -1));
	printf("10부터 10까지의 합 : %d\n", make_sum(10, 10));
	return 0;
}