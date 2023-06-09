#include <stdio.h>

int main(void) {
	/* 배열: 변수의 집합 */

	// 배열의 선언
	int arr1[3];

	// 배열의 선언 & 초기화
	// - 초기화시키는 값의 수량은 배열의 크기를 넘을 수 없음
	// - 값을 모자르게 넣을 경우, 자동으로 0으로 초기화가 된다.
	double arr2[10] = { 1.1,2.2,3.3,4.4 /*초기화 목록. 배열 아님.*/};

	// 배열의 사용 : 특정 순번에 있는 변수를 []를 이용해 지정하여 사용한다.
	// - 번호는 0번부터 시작하고, 인덱스라고 부른다.
	arr1[0] = 100;	// 첫번째 변수
	arr1[1] = 200;	// 두번째 변수
	arr1[2] = 300;	// 세번째 변수
	// - 인덱스는 언제나 사람이 세는 방식 - 1
	printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);
	printf("%.2f %.2f\n", arr2[4], arr2[5]);
	// - 사용방식은 일반변수랑 완전히 동일한다.
	printf("실수값 2개 입력 >> ");
	scanf_s("%lf", &arr2[4]);
	scanf_s("%lf", &arr2[5]);
	printf("%.2f %.2f\n", arr2[4], arr2[5]);
	printf("연산결과 : %.2f\n", arr1[0] + arr2[1]);
	return 0;
}