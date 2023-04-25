#include <stdio.h>

int main(void) {
	int value = 0;
	int result = 0;
	printf("정수 입력 >> ");
	scanf_s("%d", &value);
	// while의 유한반복 : 반복에 사용된 변수의 값을 갈아버린다.
	// - 별개 변수를 준비안하니 더 관리가 편해진다.
	// - 중간과정은 필요없고, 결과만 같으면 된다.
	// - value에 저장된 값은 더 이상 안쓰니 갈아버린다.
	//   온존할 경우, 복사해서 쓰면 그만이다.
	while (value > 0) {
		result += value;
		value -= 1;
	}
	printf("결과 : %d\n", result);
	return 0;
}