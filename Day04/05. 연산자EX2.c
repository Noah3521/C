#include <stdio.h>

int main(void) {
	// ���α׷�(����) ���� �� �� : �Է��� ���� ���� �߰��ϸ� �ȴ�.
	int num = 0;
	double fnum = 0.0;
	
	printf("����, �Ǽ� �Է� >> ");
	scanf_s("%d", &num);
	scanf_s("%lf", &fnum);
	
	printf("<%d>�� 3�� : <%d>\n", num, num * num * num);
	printf("<%.2f>�� 2�� : <%.2f>\n", fnum, fnum * fnum);
	// ����� ���ǻ��� : ������ �迭(��/������)�� 0���� ���� �� ������...
	//                 ����� ���� �ݵ�� �ɷ������� ������ �Ѵ�.
	printf("<%d> / <%.2f> : <%.2f>\n", num, fnum, num / fnum);
	printf("<%d> * <%.2f> : <%.2f>\n", num, fnum, num * fnum);
	// �ŵ����������� ������ ���� Ǯ�� ��� �Ѵ�.
	return 0;
}