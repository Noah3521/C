#include <stdio.h>
// 주의사항 : 함수는 어지간히 익숙치 않은 이상 바로 만들어지지 않음
// - 여기서 우리가 제일 익숙한 것은, 완성된 프로그램(문제)를 만드는 것
// - 이를 기반으로 변형하는 것이 다른 형식의 함수이다.
int get_sum(void) {
	int num = 0;
	printf("합을 구하려는 정수 입력 >> ");
	scanf_s("%d", &num);
	// return은 조건문과 함께 사용하면 선택할 수 있다.
	if (num <= 0) return 0;
	else {
		int result = 0;
		while (num > 0) {
			result += num;
			num -= 1;
		}
		return result;
	}
}
// 3형식의 return은 가치가 있는 것이라면, 뭐든 임의로 지정해서 복사하도록 할 수 있다.
// - 연산결과물
// - 프로그램의 상태( 0 - 정상종료, 1 - 문제있음, 2 - 심각한문제있음 .... )

int main(void) {
	int result = 0;
	
	// 코드를 간결하게 바꿀 수 있음
	while (result <= 0) result = get_sum();
	// 종속코드가 2줄이상이니 반드시 필요했던 while을
	// 중괄호 때고 쓰는 것도 가능하게 해준다.
	
	printf("함수에서 구한 합 : %d\n", result);
	return 0;
}