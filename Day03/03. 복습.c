#include <stdio.h>

int main(void) {
	// ���α׷� : �ڷ� -> ó�� -> ����
	// �������� : �ڷḦ ������ �� �ִ� ������ �غ�
	char ch = 'A';
	int num = 123;
	double fnum = 3.14;
	char word[100] = "Air";
	// ��� : �ʿ��� ���� �ʿ��� ���·� �����ϴ� ��
	// - ���� : ���Ĺ��ڰ� ����� ���ڿ�
	// - ���Ĺ��� : ���� ȭ�鿡 �����ִ� ����
	printf("�̰��� %c �Դϴ�.\n", ch);
	printf("�̰� %d, %f �Դϴ�.\n", num, fnum);
	printf("�ܾ� : %s\n", word);
	return 0;
}