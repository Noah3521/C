#include <stdio.h>

int main(void) {
	// 서식문자의 서식 : 값의 형태를 건드린다.
	char ch = 'Z';
	char word[100] = "Apple";
	int num = 12;
	double fnum = 3.14;
	// 1) X : 폭설정. 정렬용 - 잘 안씀.
	printf("->%6c<-\n", ch);	// 우측정렬
	printf("->%5s<-\n", word);
	printf("->%-4d<-\n", num);	// 좌측정렬
	printf("->%3f<-\n", fnum);
	// 2) .Y : 서식문자열로 적용형태가 다름.
	printf("->%.5c<-\n", ch);
	printf("->%.4s<-\n", word);	// 4글자까지만 출력
	printf("->%.3d<-\n", num);	// 3자리수로 맞춰주며, 모자른 곳은 0으로 채움
	printf("->%.2f<-\n", fnum);	// 소수점 조절. 제일 많이 사용함. 반올림.
	// 필요할 경우, 위 두가지는 합칠 수 있음
	printf("->%10.5d<-\n", num);	// 합칠 경우 X.Y로 작성한다.
	printf("->%-10.5d<-\n", num);
	return 0;
}