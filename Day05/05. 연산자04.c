#include <stdio.h>

int main(void) {
	// 복합대입연산자 : 대입연산 + 산술연산
	int count = 100;
	printf("물건의 수량 : %d개\n", count);
	printf("5개가 증가할 경우 : %d개\n", count + 5);
	count = count + 5; // 새로운 값을 저장 / 교체
	printf("5개가 증가한 상태 : %d개\n", count);
	count += 5;		// 기존 값에 대한 변화를 누적
	printf("5개가 증가한 상태 : %d개\n", count);

	// +@ : 증감연산자. 단항연산자. 1씩 증가/감소
	// - 대입연산이니 주의할 것
	// 전치
	++count; // 증가. 감소는 --count;
	printf("count : %d\n", count);
	// 후치
	count++; // 증가. 감소는 count--;
	printf("count : %d\n", count);
	return 0;
}