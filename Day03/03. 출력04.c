#include <stdio.h>

int main(void) {
	// ���Ĺ����� ���� : ���� ���¸� �ǵ帰��.
	char ch = 'Z';
	char word[100] = "Apple";
	int num = 12;
	double fnum = 3.14;
	// 1) X : ������. ���Ŀ� - �� �Ⱦ�.
	printf("->%6c<-\n", ch);	// ��������
	printf("->%5s<-\n", word);
	printf("->%-4d<-\n", num);	// ��������
	printf("->%3f<-\n", fnum);
	// 2) .Y : ���Ĺ��ڿ��� �������°� �ٸ�.
	printf("->%.5c<-\n", ch);
	printf("->%.4s<-\n", word);	// 4���ڱ����� ���
	printf("->%.3d<-\n", num);	// 3�ڸ����� �����ָ�, ���ڸ� ���� 0���� ä��
	printf("->%.2f<-\n", fnum);	// �Ҽ��� ����. ���� ���� �����. �ݿø�.
	// �ʿ��� ���, �� �ΰ����� ��ĥ �� ����
	printf("->%10.5d<-\n", num);	// ��ĥ ��� X.Y�� �ۼ��Ѵ�.
	printf("->%-10.5d<-\n", num);
	return 0;
}