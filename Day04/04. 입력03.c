#include <stdio.h>

int main(void) {
	// scanf_s에서 문자 입력은 규칙을 몽땅 무시하니 주의할 것
	// - 예외적으로 서식을 만들어서 입력을 받는다.
	char ch1 = 0;
	char ch2 = 0;
	printf("문자 2개 입력 >> ");
	scanf_s(" %c", &ch1, 1); // 앞에 한칸 띄어쓰기를 넣어주면
	scanf_s(" %c", &ch2, 1); // 나머지 서식과 동일한 규칙이 된다.
	// ★ 규칙으로 기억하자.
	printf("결과1 : ->%c<-\n", ch1);
	printf("결과2 : ->%c<-\n", ch2);
	return 0;
}