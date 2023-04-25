#include <stdio.h>

int main(void) {
	// 산술연산자 : 수학적인 연산을 위한 연산자
	int count = 100;
	
	// 1회성이면 바로 작성한다 : 변수를 늘리기 싫어서.
	printf("상품의 수량 : %d개\n", count);
	printf("5개의 증가할 경우 : %d개\n", count + 5);
	printf("10개가 감소할 경우 : %d개\n", count - 10);
	
	// 여러번 사용하니 변수에 저장한다 : 연산식을 늘리기 싫어서.
	int per_count = count / 30; // 결과만 저장된다.
	printf("100개를 30명에게 나눠줄 경우 : %d\n", per_count);
	printf("나눠준 상품의 수량 : %d개\n", per_count * 30);
	
	// 사용하고 필요없는 값이 저장된 변수라면, 재활용할 수 있다.
	count = count % 30;
	printf("남은 수량 : %d개\n", count);
	return 0;
}