#include <stdio.h>

int main(void) {
	// 유한반복 : 일정한 값의 변화를 이용해
	//           필요한 값을 준비하거나, 반복횟수를 확보한다.

	// 유한반복 만드는법 : 규칙성을 파악한다.
	// 1. 나오게할 내용 / 작동할 코드를 그냥 작성한다.
	/*
	printf("1 2 3 4 5 6 7 8 9 10\n");
	*/
	// 2. 같은 규격이 되도록 분해한다.
	/*
	printf("1 "); // 1 ~ 10을 출력하는 코드가 반복 대상
	printf("2 ");
	printf("3 ");
	printf("4 ");
	printf("5 ");
	printf("6 ");
	printf("7 ");
	printf("8 ");
	printf("9 ");
	printf("10 ");
	printf("\n"); // 반복 대상이 아님
	*/
	// 3. 변수를 이용해서 같은 모양의 코드가 되도록 합친다.
	//    + 복합대입연산자를 이용해 준비한 변수에 합친다.
	/*
	int num = 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("%d ", num);
	num += 1;
	printf("\n");
	*/
	// 4. 포장한다. 팁 : 반복횟수를 식별하기 쉬운 변수 하나만으로 조건식을 구성한다.
	int num = 1;
	while (num <= 10) {
		printf("%d ", num);
		num += 1;
	} printf("\n");

	// 단순 반복이라서 변화가 없을 경우 : 임의로 설정하면 된다.
	// - 임의로 설정한 값에 대해서 위의 과정을 똑같이 밟으면 된다.
	int num1 = 1;
	while (num1 <= 5) {
		printf("Hi~! ");
		num1 += 1;
	} printf("\n");
	return 0;
}