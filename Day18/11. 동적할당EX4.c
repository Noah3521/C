#include <stdio.h>
#include <malloc.h>

int main(void) {
	// 동적할당은 공간의 생성/삭제에만 관여합니다.
	// 그 외에는 우리가 다뤘던 변수의 사용방식입니다.
	int size = 5; int result = 0;
	int* arr = NULL;
	if (size > 0) {
		arr = (int*)malloc(sizeof(int) * size);
		if (arr != NULL) {
			printf("정수값 %d개 입력 >> ", size);
			for (int i = 0; i < size; i += 1) {
				scanf_s("%d", &arr[i]);
			}
			for (int i = 0; i < size; i += 1) {
				result += arr[i];
			}
			printf("저장된 값 :");
			for (int i = 0; i < size; i += 1) {
				printf(" %d", arr[i]);
			} printf("\n", result);
		}
		else printf("동적할당실패\n");
	}
	else printf("잘못된 크기\n");
	if (arr != NULL) {
		free(arr);
	}
	return 0;
}