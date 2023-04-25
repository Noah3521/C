#include <stdio.h>

int main(void) {
	/*
	추가문제.내가 입력한 수의 거듭제곱을 구하는 코드를 작성하세요.
	거듭제곱을 구할 정수와, 거듭제곱 횟수를 입력을 받습니다.
	거듭제곱 횟수가 0이상이면 정수결과이고
	거듭제곱 횟수가 0미만이면 실수결과이며
	소수점 10자리까지 출력합니다.
	*/
	int num = 0;
	int count = 0;
	int result1 = 1;
	double result2 = 1;
	printf("몇의 몇 거듭제곱인가요? ");
	scanf_s("%d", &num);
	scanf_s("%d", &count);
	
	/*
	int copy_count = count;
	if (count < 0) copy_count *= -1;
	while (copy_count > 0) {
		if (count < 0) result2 /= num;
		else result1 *= num;
		copy_count -= 1;
	}
	if (count >= 0) printf("%d\n", result1);
	else printf("%.10f\n", result2);
	*/

	printf("결과 : ");
	if (count >= 0) {
		while (count > 0) {
			result1 *= num;
			count -= 1;
		}
		printf("%d\n", result1);
	}
	else {
		while (count < 0) {
			result2 /= num;
			count += 1;
		}
		printf("%.10f\n", result2);
	}
	return 0;
}