#include <stdio.h>
#include <malloc.h> // Memory ALLOCation�� ����

int main(void) {
	/*
	// �����Ҵ�
	// 1. �ʿ��� ��ŭ�� ������ ��û( int - 4 Bytes )
	// 2. ������ �뵵�� ����( int )
	// 3. ������ �� �� �ִ� �̸��� ����( num )
	int num;
	*/

	/*
	// �����Ҵ�
	// 1. �ʿ��� ��ŭ�� ������ ��û - �������� ����, �Ǽ��� �߻��Ѵ�.
	// 2. ������ �뵵�� ���� - �ּҰ��� ����ȯ�ϰ�, �ٷ�� �ڷ����� �����ϰ� �غ�
	// 3. ������ �� �� �ִ� �̸��� ����( *���������� ����ϰ� �� )
	*/
	// ������ ��� - �����ͺ����� �̿��� ������ �̿��Ѵ�.
	int* pnum = (int*)malloc(sizeof(int));	// ��ȯ���� �ּҰ��̴� ����
	double* pfnum = (double*)malloc(sizeof(double));
	*pnum = 100;
	*pfnum = 1.17;
	printf("%d %.2f\n", *pnum, *pfnum);
	printf("����, �Ǽ� >> ");
	scanf_s("%d", pnum); scanf_s("%lf", pfnum);
	printf("���ο� �� : %d, %.2f\n", *pnum, *pfnum);
	printf("������1 : %.2f\n", *pnum + *pfnum);
	printf("������2 : %.2f\n", *pnum / *pfnum);
	
	// �����Ҵ��� ���ǻ��� : ������ ������ �뵵�� �������� �����ؾ� �ȴ�.
	free(pnum);	
	free(pfnum);	// ����� ���� �Բ� �ı��Ѵ�.
	return 0;
}