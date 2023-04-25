#include <stdio.h>
// 매개변수가 일반변수 : 값만 복사하는 방식
int make_sum1(int num) {
	int result = 0;
	while (num > 0) {
		result += num;
		num -= 1;
	}
	return result;
}
// 매개변수가 포인터변수 : 변수를 공유하기 때문에, return을 거치지 않아도 return되는 효과가 생긴다.
int make_sum2(int* pnum) {
	int result = 0;
	while (*pnum > 0) {
		result += *pnum;
		*pnum -= 1;
	}
	return result;
}
// 일반변수는 값만 필요하면 절대로 포인터를 쓰지 않는다.
void change(int* n1, int* n2) {
	*n1 += 5; *n2 += 10;
	printf("함수에서 출력한 결과 : %d, %d\n", *n1, *n2);
}

void single_variable(void) {
	// 포인터의 주 사용처는 서로 다른 공간을 이용할려고 할 때....
	// - 호출되는 곳에서 그대로 작동하는 코드가 사용되는 경우가 많다.
	// - 함수를 만들 때, 코드를 구간별로 잘 구분해야 된다.
	int result = 0;
	int num = 10;
	result = make_sum1(num);
	printf("%d %d\n", num, result);
	result = make_sum2(&num);
	printf("%d %d\n", num, result);
	change(&num, &result);
	printf("%d %d\n", num, result);
}

// 배열은 애초에 복사자체가 안되는 구조이기 때문에...
// 이를 반드시 공유해서 써야 하고, 문자열을 제외하고
// 항상 그 크기를 전달받아서 제어되어야 한다.
void input_arr(char* msg, int* parr, int size) {
	printf(msg, size);
	for (int i = 0; i < size; i += 1) {
		scanf_s("%d", &parr[i]);
	}
}
int make_sum(int* parr, int size) {
	int result = 0;
	for (int i = 0; i < size; i += 1) {
		result += parr[i];
	}
	return result;
}
void show_values(char* msg, int* parr, int size) {
	printf(msg);
	for (int i = 0; i < size; i += 1) {
		printf(" %d", parr[i]);
	} printf("\n");
}

void arr_variable(void) {
	int arr[6] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	int result = 0;
	input_arr("%d개의 값 입력 >> ", arr, size);
	/*
	printf("%d개의 값 입력 >> ", size);
	for (int i = 0; i < size; i += 1) {
		scanf_s("%d", &arr[i]);
	}
	*/
	result = make_sum(arr, size);
	/*
	for (int i = 0; i < size; i += 1) {
		result += arr[i];
	}
	*/
	show_values("입력된 값들\n", arr, size);
	/*
	printf("입력된 값들\n");
	for (int i = 0; i < size; i += 1) {
		printf(" %d", arr[i]);
	} printf("\n");
	*/
	printf("합 : %d\n", result);
}
int main(void) {
	single_variable();
	arr_variable();
	return 0;
}