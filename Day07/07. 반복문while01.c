#include <stdio.h>

int main(void) {
	// 무한반복문 : 반복횟수를 모른다
	double height = 0;
	printf("롤러코스터 탑승 제한은 145cm입니다.\n");
	printf("키를 측정합니다~\n>> ");
	scanf_s("%lf", &height);
	// 진행절차 : 조건식 -> 종속문 -> 조건식 -> 종속문 ....
	//           기본적으로 조건식이 부정되어야 종료가 된다.
	while (height <= 0) {
		printf("이상하네요~ 재측정할께요~\n>> ");
		scanf_s("%lf", &height);
	}
	// 주의사항1. else는 붙지 않는다.
	// 주의사항2. 종속문에서 반드시 입력받아야 된다.
	//     값의 변화가 없으면 안끝난다. 논리오류로써의 무한반복이라 한다.
	// 주의사항3. if처럼 접근은 하지만, if처럼 쓰면 안됨.
	if (height >= 145) {
		printf("탑승가능합니다~\n");
	}
	else {
		printf("탑승할 수 없습니다~\n");
	}
	return 0;
}