#include <stdio.h>

void swap(int* pnum1, int* pnum2) {
	// 포인터 변수는 변수를 대체한다.
	int tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
	// 포인터변수는 값을 불러오는 매개변수의 역할을 당연히 수행한다.
	// + 값을 반환시키는 return역할도 수행한다.
}

int main(void) {
	int num1 = 0; int num2 = 0;
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	printf("교체전 : %d, %d\n", num1, num2);
	swap(&num1, &num2);
	printf("교체후 : %d, %d\n", num1, num2);

	return 0;
}