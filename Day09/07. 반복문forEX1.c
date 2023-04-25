#include <stdio.h>

int main(void) {
	int num = 0;
	while (num == 0) {
		printf("0이 아닌 정수 입력 >> ");
		scanf_s("%d", &num);
		if (num == 0) {
			printf("재입력하세요.\n");
		}
	}
	printf("%d의 배수목록\n", num);
	if (num < 0) {
		num *= -1;
	}
	if (num <= 20) {
		for (int i = num; i <= 20; i += num) {
			printf("%d ", i);
		}
	}
	else {
		printf("범위 내에 없음\n");
	}
	return 0;
}