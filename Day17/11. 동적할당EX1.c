#include <stdio.h>
#include <malloc.h>

int main(void) {
	// 동적할당의 관리법은 따로 존재한다
	// - 변수가 있다는 것을 확신할 수 있는가?
	// - 변수가 있다고 확인을 하고 나서 이를 이용한다.

	// 동적할당의 사용법
	
	// - 필요한 크기/종류의 공간을 만들어서
	int* pnum1 = (int*)malloc(sizeof(int)); // &num1
	int* pnum2 = (int*)malloc(sizeof(int)); // &num2
	
	// - 만들어진 공간을 이용하고
	*pnum1 = 10;
	*pnum2 = 20;
	printf("변수에 저장된 값 : %d, %d\n", *pnum1, *pnum2);
	
	// - 만들었던 공간의 뒷정리를 한다.
	free(pnum1);
	free(pnum2);
	return 0;
}