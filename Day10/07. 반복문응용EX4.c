#include <stdio.h>

int main(void) {
	// 1. �Ʒ��� �ڵ带 �ݺ����� �ٲټ���.
	// ���� : �ݺ��� ���ο� �ݺ����� �ϳ� �ִ� 2�� �ݺ���
	printf("#\n");		// 1ȸ �ݺ�
	printf("##\n");		// 2ȸ �ݺ�	// ��ü
	printf("###\n");	// 3ȸ �ݺ�	// 4ȸ �ݺ�
	printf("####\n");	// 4ȸ �ݺ�
	/*
	* ���� �ڵ�
	printf("#");
	printf("\n");
	printf("#"); printf("#");
	printf("\n");
	printf("#"); printf("#"); printf("#");
	printf("\n");
	printf("#"); printf("#"); printf("#"); printf("#");
	printf("\n");
	*/
	
	// 2. �Ʒ��� �ڵ带 �ݺ����� �ٲټ���.
	// ���� : �ݺ��� ���ο� ���� ����� �ݺ����� 2�� �ִ� 2�� �ݺ���
	printf("   #\n");	// 3ȸ �ݺ� + 1ȸ�ݺ�
	printf("  ##\n");	// 2ȸ �ݺ� + 2ȸ�ݺ�		// ��ü
	printf(" ###\n");	// 1ȸ �ݺ� + 3ȸ�ݺ�		// 4ȸ �ݺ�
	printf("####\n");	// 0ȸ �ݺ� + 4ȸ�ݺ�
	/*
	* ���� �ڵ�
	printf(" "); printf(" "); printf(" "); printf("#");
	printf("\n");
	printf(" "); printf(" "); printf("#"); printf("#");
	printf("\n");
	printf(" "); printf("#"); printf("#"); printf("#");
	printf("\n");
	printf("#"); printf("#"); printf("#"); printf("#");
	printf("\n");
	*/
	return 0;
}