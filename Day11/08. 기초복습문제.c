#include <stdio.h>

int main(void) {
	/*
	// 1. ���輺�� 3���� �Է��� �޾� ����� ���մϴ�.
	//   ���輺���� 0������ 100�������̸�
	//   �� �ܿ��� ���Է��� �޽��ϴ�.
	//   ���� ����� ����ϼ���.
	// 2. 1���� ���� �ڵ� ��ü�� ���� �ݺ����Դϴ�.
	//    �Է��� �޾� ����� ������ ���� ���õǵ��� �մϴ�.
	//    ����� ���� ��� 1�� ������ �״�� �����ϸ�
	//    ����� ������ ���� ��� ���α׷��� ����˴ϴ�.
	*/

	int score1; int score2; int score3;
	int choice = 1;
	while (choice == 1) {
		printf("1�� ���α׷����� / 0�� ����\n"); scanf_s("%d", &choice);
		if (choice == 1) {
			score1 = -1; score2 = -1; score3 = -1;
			while (score1 < 0 || score1 > 100) {
				printf("����1 �Է� >> "); scanf_s("%d", &score1);
			}
			while (score2 < 0 || score2 > 100) {
				printf("����2 �Է� >> "); scanf_s("%d", &score2);
			}
			while (score3 < 0 || score3 > 100) {
				printf("����3 �Է� >> "); scanf_s("%d", &score3);
			}
			printf("��� : %.2f��\n", (score1 + score2 + score3) / 3.0);
		}
	}
	printf("���α׷� �����Դϴ�.\n");
	return 0;
}