#include <stdio.h>

int main(void) {
	// 배열을 선언할 때 크기는 무조건 0보다 큰 상수정수를 넣는다.
	// 선언된 배열을 쓸 때는 인덱스 번호는 정수변수로 대체할 수 있다.
	int arr[10] = { 0 };
	/*
	// 배열을 반복으로 운용할 경우, 철저하게 연동시켜야 하고
	// 반복횟수도, 연산을 통해서 구한다. sizeof 연산자를 이용한다.
	printf("%d Bytes\n", sizeof(arr)); // 대상 변수의 전체 크기
	printf("%d Bytes\n", sizeof(int)); // 대상 자료형의 크기
	*/
	int size = sizeof(arr) / sizeof(int);
	int num = 10;
	// 팁 : 정수범위에서는 실수값이 절대 안나오니 x <= 5와 x < 6은 같은 의미가 된다.
	for (int i = 0; i < size; i += 1) {
		arr[i] = num;
		num += 1;
	}
	for (int i = 0; i < size; i += 1) {
		printf("%d ", arr[i]);
	} printf("\n");
	
	// 짝수번째면 인덱스번호상 홀수값들을 식별하면 된다.
	// - 하지만, 이런 것을 위해 조건문을 쓰지 않는다.
	// - 배수는 아주 명백한 규칙성이 있으니 이를 기반으로 굴리면 된다.
	for (int i = 0; i < size; i += 1) {
		if (i % 2 != 0) printf("%d ", arr[i]);
	} printf("\n");
	return 0;
}