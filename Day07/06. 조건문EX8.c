#include <stdio.h>

int main(void) {
	int sc1 = 0;
	int sc2 = 0;
	int sc3 = 0;
	double avg;
	printf("���� ���� �Է� >> "); scanf_s("%d", &sc1);
	printf("���� ���� �Է� >> "); scanf_s("%d", &sc2);
	printf("���� ���� �Է� >> "); scanf_s("%d", &sc3);
	avg = (sc1 + sc2 + sc3) / 3.0;
	printf("������� : %.2f\n", avg);
	printf("��� : ");
	if (avg >= 90) {
		printf("��\n");
	}
	else if (avg >= 80) {
		printf("��\n");
	}
	else if (avg >= 70) {
		printf("��\n");
	}
	else {
		printf("�����\n");
	}
	return 0;
}