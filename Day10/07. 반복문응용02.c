#include <stdio.h>

int main(void) {
	// for를 사용시 주의할 점 : 변수를 중복하여 선언하면 안됨.
	for (int y = 0; y < 4; y += 1) {
		// 바깥 반복문의 변수와 동일한 이름으로 내부에서 변수를 선언하면
		// 내부의 선언한 변수가 우선순위를 가진다.
		for (int x = 0; x < 3; x += 1) {
			// 나중에 내부에서 변수가 필요할 때 못쓰기 때문에
			// 항상 달리하여 선언한다.
			printf("Hi~! %3d ", (y + 1) * (x + 1));
		}
		printf("\n");
	}
	// 반복조합은 필요한 것에 따라 while / for를 구분한다.
	// 유한 + 무한 : for + while
	// 무한 + 유한 : while + for
	// 유한은 값의 온존여부에 따라 while/for를 고른다.
	return 0;
}