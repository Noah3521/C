#include <stdio.h>
#include <malloc.h>

int main(void) {
	// �����Ҵ��� �������� ���� �����Ѵ�
	// - ������ �ִٴ� ���� Ȯ���� �� �ִ°�?
	// - ������ �ִٰ� Ȯ���� �ϰ� ���� �̸� �̿��Ѵ�.

	// �����Ҵ��� ����
	
	// - �ʿ��� ũ��/������ ������ ����
	int* pnum1 = (int*)malloc(sizeof(int)); // &num1
	int* pnum2 = (int*)malloc(sizeof(int)); // &num2
	
	// - ������� ������ �̿��ϰ�
	*pnum1 = 10;
	*pnum2 = 20;
	printf("������ ����� �� : %d, %d\n", *pnum1, *pnum2);
	
	// - ������� ������ �������� �Ѵ�.
	free(pnum1);
	free(pnum2);
	return 0;
}