#include <stdio.h>

int main(void) {
	int num = 123;
	double fnum = 3.456;
	char word[100] = "Apple";
	// ���� ���¸� �ٲٴ°� �����̸�, ���Ĺ��ڿ� ������ �����Ѵ�.
	printf("%.3d%.4d%.5d\n", num, num, num);
	
	// �������� ������¶��, ���Ĺ��ڸ� ������ ������ �����.
	printf("%d0%d00%d\n", num, num, num);
	
	printf("%.1f -> %.2f -> %.3f\n", fnum, fnum, fnum);
	printf("%.1s -> %.3s -> %.5s\n", word, word, word);
	return 0;
}