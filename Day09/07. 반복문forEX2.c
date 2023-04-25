#include <stdio.h>

int main(void) {
	int count = 0;
	printf("반복횟수 입력 >> ");
	scanf_s("%d", &count);
	if (count <= 0) {
		printf("출력할 내용이 없습니다.\n");
	}
	else {
		// 팁 : 특정 횟수만큼 반복하는 반복규칙을 외워서 쓰는게 좋음
		// - 1씩 변화하는 기준으로 범위를 기억하자.
		
		// 1부터 10미만 -> 1 ~ 9  /  9번
		// 1부터 10이하 -> 1 ~ 10 / 10번
		// 0부터 10미만 -> 0 ~ 9  / 10번
		// 0부터 10이하 -> 0 ~ 10 / 11번
		
		// 10부터 1이상 -> 10 ~ 1 / 10번
		// 10부터 1초과 -> 10 ~ 2 /  9번
		// 10부터 0이상 -> 10 ~ 0 / 11번
		// 10부터 0초과 -> 10 ~ 1 / 10번
		for (int i = count; i >= 1; i -= 1) {
			printf("HELLO! ");
		} printf("\n");
		for (int i = 1; i <= count; i += 1) {
			printf("HELLO! ");
		} printf("\n");
	}
	return 0;
}