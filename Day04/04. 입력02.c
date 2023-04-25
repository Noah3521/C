#include <stdio.h>

int main(void) {
	// 값을 여러개 입력받는 방법 : ★서식을 만들지 않는다.
	// - 여러개를 입력할 때는 띄어쓰기/엔터/탭으로 구분한다.
	// - 서식문자 외에는 절대로 넣지 않는다.
	// - 엔터는 입력종료 겸 입력된 값들을 구분시키는 구분자역할도 동시 수행
	char name1[100] = "";
	char name2[100] = "";
	printf("이름 2개 입력 >> ");
	scanf_s("%s%s", name1, 100, name2, 100);
	printf("결과 : %s, %s\n", name1, name2);
	
	// 팁이자 주의사항 : scanf_s로 여러개 동시 입력은 되도록 피한다.
	// - 1) 융통성이 떨어진다.
	// - 2) 관리하기 불편해진다.
	double fnum1 = 0.0;
	double fnum2 = 0.0;
	// scan 방식이며, 입력된 것을 훓어보고, 일치하는 것을 저장시켜준다.
	// -> 2개이상을 동시에 받도록 만들어 써봤자, 별 이점이 없다.
	printf("실수값 2개 입력 >> ");
	scanf_s("%lf", &fnum1);
	scanf_s("%lf", &fnum2);
	printf("결과 : %.2f, %.2f\n", fnum1, fnum2);
	return 0;
}