#include <stdio.h>

int main(void) {
	int sc1 = 0;
	int sc2 = 0;
	int sc3 = 0;
	double avg;
	printf("국어 점수 입력 >> "); scanf_s("%d", &sc1);
	printf("영어 점수 입력 >> "); scanf_s("%d", &sc2);
	printf("수학 점수 입력 >> "); scanf_s("%d", &sc3);
	avg = (sc1 + sc2 + sc3) / 3.0;
	printf("평균점수 : %.2f\n", avg);
	printf("등급 : ");
	if (avg >= 90) {
		printf("상\n");
	}
	else if (avg >= 80) {
		printf("중\n");
	}
	else if (avg >= 70) {
		printf("하\n");
	}
	else {
		printf("재시험\n");
	}
	return 0;
}