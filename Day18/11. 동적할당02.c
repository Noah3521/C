#include <stdio.h>
#include <malloc.h>

void single_variable(void) {
	int* pnum1 = (int*)malloc(sizeof(int));
	int* pnum2 = (int*)malloc(sizeof(int));
	// 동적할당의 핵심포인트 : 실제로 변수가 생성되었다고 확인해야 한다.
	// -> 동적할당 실패시에는 주소값이 0 이 나오고, C언어에서는 NULL이라 표현한다.
	// -> 운용/관리방법은 NULL 여부를 체크하기 위한 조건문이 사용된다.
	if (pnum1 != NULL && pnum2 != NULL) {
		*pnum1 = 100;
		*pnum2 = 200;
		printf("결과 : %d\n", *pnum1 + *pnum2);
	}
	else {
		printf("하나 이상의 변수가 동적할당에 실패했습니다.\n");
	}
	// 마찬가지로 할당받았는지 체크하고, 동적할당해제를 한다.
	if (pnum1 != NULL) {
		free(pnum1);
	}
	if (pnum2 != NULL) {
		free(pnum2);
	}
}
void array_variable(void) {
	// 동적할당으로 배열을 만들 때 주의사항 : 크기부터 먼저 설정한다.
	int size = 0; // 변수의 수량 지정
	int* parr = NULL; // 포인터변수는 주소값 0(NULL)으로 초기화한다.
	printf("배열의 크기 입력 >> ");
	scanf_s("%d", &size);
	// 크기를 이용할 때 주의사항 : 조건문으로 올바른 크기여부를 체크해야 함
	if (size <= 0) printf("올바르지 않은 크기....\n");
	else {
		parr = (int*)malloc(sizeof(int) * size);
		if (parr != NULL) {
			for (int i = 0; i < size; i += 1) {
				parr[i] = 10 + i;
			}
			for (int i = 0; i < size; i += 1) {
				printf(" %d", parr[i]);
			}
		}
		else printf("동적할당 실패\n");
	}
	if (parr != NULL) {
		// 동적할당으로 만든 배열은 할당받은 변수를 이용해서 제거하면 된다.
		free(parr);
	}
}
int main(void) {
	single_variable();
	array_variable();
	return 0;
}