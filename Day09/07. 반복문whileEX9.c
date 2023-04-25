#include <stdio.h>

int main(void) {
	// 1) 1이상 1000이하의 정수만 입력을 받아 통과시킵니다.
	//    단, 범위 외 정수가 들어올 경우 최대 3회까지만 입력을
	//    받고, 그 외에는 그대로 통과시킵니다.
	
	// 위에서 입력받은 값 중 해당 범위 내의 정수만
	// 짝수홀수여부를 판단하여 출력하세요.
	// 그 외에는 <입력오류> 라고 출력합니다.
	int num = 0;
	int count = 0;
	while ((num < 1 || num > 1000) && count < 3) {
		printf("1이상 1000이하의 값을 입력하세요 >> ");
		scanf_s("%d", &num);
		count += 1;
		if ((num < 1 || num > 1000) && count < 3) {
			printf("잘못된 입력입니다.\n%d회 남았습니다.\n", 3 - count);
		}
	}
	if (num < 1 || num > 1000) {
		printf("입력오류\n");
	}
	else if (num % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}
	return 0;
}