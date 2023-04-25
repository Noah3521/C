#include <stdio.h>

int main(void) {
	// 1. 약수는 머리속에서 뚝딱 나오지 않는다.
	//   약수의 개념과 약수를 구하는 방법이 있음.

	// 2. 무한반복은 특정 조건을 만족하는 값을 얻어내고...
	//    유한반복은 반복횟수 및 숫자들을 준비한다.
	//    값을 판별하지 않는다.
	int value = 0;
	int num = 1;
	while (value < 1 || value > 10) {
		printf("1부터 10까지의 정수 입력 >> ");
		scanf_s("%d", &value);
	}
	printf("%d의 약수목록\n", value);
	while (num <= value) {
		if (value % num == 0) {
			printf("%d ", num);
		}
		num += 1;
	} printf("\n");
	return 0;
}