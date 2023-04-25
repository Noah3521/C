#include <stdio.h>

int main(void) {
	// 프로그램(절차) 만들 때 팁 : 입력은 연산 전에 추가하면 된다.
	int num = 0;
	double fnum = 0.0;
	
	printf("정수, 실수 입력 >> ");
	scanf_s("%d", &num);
	scanf_s("%lf", &fnum);
	
	printf("<%d>의 3승 : <%d>\n", num, num * num * num);
	printf("<%.2f>의 2승 : <%.2f>\n", fnum, fnum * fnum);
	// 연산시 주의사항 : 나누기 계열(몫/나머지)은 0으로 나눌 수 없으니...
	//                 사용할 때는 반드시 걸러내도록 만들어야 한다.
	printf("<%d> / <%.2f> : <%.2f>\n", num, fnum, num / fnum);
	printf("<%d> * <%.2f> : <%.2f>\n", num, fnum, num * fnum);
	// 거듭제곱연산자 없으니 직접 풀어 써야 한다.
	return 0;
}