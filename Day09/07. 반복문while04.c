#include <stdio.h>

int main(void) {
	int num = 0;
	int count = 0;
	// 보조제어문 : 반복을 쉽게 통제하기 위한 제어문
	// -> 반복문은 유한/무한을 섞어 쓰면 복잡해진다.
	// -> 절대 준수 원칙 : 항상 조건문과 사용한다.
	// 1. continue : 현재 진행단계를 건너뛴다.
	// 2. break : 종속문이 실행되는 도중에 반복을 종료.
	// 두 제어문의 특징 : 만남 시점에서 바로 동작한다.
	while (count < 3) {
		printf("1이상 1000이하의 값을 입력하세요 >> ");
		scanf_s("%d", &num);
		if (num < 1 || num > 1000) {
			count += 1;
			printf("잘못된 입력입니다.\n%d회 남았습니다.\n", 3 - count);
			continue;
			printf("장난질을 해도...\n");
		}
		if (num >= 1 && num <= 1000) {
			break;
			printf("나오지 않는다...\n");
		}
	}
	// 주의사항 : 사용해서 얻는 이득이 있으면 써야 한다.
	// -> continue는 종속문이 굉장히 많을 때 사용한다.
	//    사용위치는 마지막은 절대 안됨.
	// -> break는 중간에 멈출 필요가 있을 때 적용한다.
	//    사용위치는 상관없지만, 반복의 마지막회차를 지정하면 안됨.
	if (num < 1 || num > 1000) {
		printf("입력오류\n");
	}
	else if (num % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}
	return 0;
}