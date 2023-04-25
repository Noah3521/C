#include <stdio.h>

int main(void) {
	int num = 1;
	// 변수는 무조건 0으로 초기화하지 않는다.
	// - 입력받는 변수는 무한반복을 걸 경우...
	//  필요없는 값을 넣어두면 된다.
	while (num % 10 != 0) {
		printf("10의 배수 입력 >> ");
		scanf_s("%d", &num);
		if (num % 10 != 0) {
			printf("%d는 10의 배수가 아닙니다.\n", num);
		}
	}
	printf("입력받은 10의 배수 : %d\n", num);
	return 0;
}