#include <stdio.h>

int main(void) {
	int arr[5] = { 0 };
	// 크기는 당연히 구해야 함.
	int size = sizeof(arr) / sizeof(int);
	// 배열 운용시에는 언제나, 인덱스를 기준으로 잡는다.
	// 주의사항 : 목적이 다른 코드는 절대로 합치지 않는다.
	for (int i = 0; i < size; i += 1) {
		arr[i] = 15 * (i + 1);
	}
	// 팁 : 배열은 특별한 경우가 아니면, 반복 돌려 써먹는다.
	printf("배열에 저장된 값 :");
	for (int i = 0; i < size; i += 1) {
		printf(" %d", arr[i]);
	} printf("\n");
	return 0;
}