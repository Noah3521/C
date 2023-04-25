#include <stdio.h>

int main(void) {
	int num = 0;
	int check;
	printf("정수 입력 >> ");
	scanf_s("%d", &num);
	check = num < 0;
	// 반복에서 중요한 것은 값의 준비도 중요하지만...
	// 반복횟수를 구하면 어떻게든 돌아간다.
	for (
		int count = ((check) ? -num : num) * 2 + 1;
		count > 0; 
		count -= 1
		) {
		printf("%d ", num);
		if (check) num += 1; // 음수
		else num -= 1; // 양수
	}
	printf("\n");
	return 0;
}