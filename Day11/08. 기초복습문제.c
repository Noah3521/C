#include <stdio.h>

int main(void) {
	/*
	// 1. 시험성적 3개를 입력을 받아 평균을 구합니다.
	//   시험성적은 0점부터 100점까지이며
	//   그 외에는 재입력을 받습니다.
	//   구한 평균을 출력하세요.
	// 2. 1에서 만든 코드 전체에 대한 반복문입니다.
	//    입력을 받아 평균을 구할지 말지 선택되도록 합니다.
	//    평균을 구할 경우 1의 과정을 그대로 진행하며
	//    평균을 구하지 않을 경우 프로그램이 종료됩니다.
	*/

	int score1; int score2; int score3;
	int choice = 1;
	while (choice == 1) {
		printf("1은 프로그램시작 / 0은 종료\n"); scanf_s("%d", &choice);
		if (choice == 1) {
			score1 = -1; score2 = -1; score3 = -1;
			while (score1 < 0 || score1 > 100) {
				printf("성적1 입력 >> "); scanf_s("%d", &score1);
			}
			while (score2 < 0 || score2 > 100) {
				printf("성적2 입력 >> "); scanf_s("%d", &score2);
			}
			while (score3 < 0 || score3 > 100) {
				printf("성적3 입력 >> "); scanf_s("%d", &score3);
			}
			printf("평균 : %.2f점\n", (score1 + score2 + score3) / 3.0);
		}
	}
	printf("프로그램 종료입니다.\n");
	return 0;
}