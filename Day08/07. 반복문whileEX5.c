#include <stdio.h>

int main(void) {
	int limit = 0;
	int num = 1;
	// 무한반복은 입력에만 사용한다.
	while (limit <= 0 || limit >= 10) {
		printf("0보다 크고 10보다 작은 정수 입력 >> ");
		scanf_s("%d", &limit);
		if (limit <= 0 || limit >= 10) {
			printf("재입력하세요.\n");
		}
	}
	// 유한반복은 범용성은 좋지만, 기본적으로 출력이나 연산에
	// 사용한다.
	printf("결과 : ");
	while (num <= limit) {
		printf("%d ", num);
		num += 1;
	}
	// 두 반복은 입력에 한해서만 서로 보조하는 형태로 합칠 수 있고
	// 그 외에는 불가능하니 주의
	return 0;
}