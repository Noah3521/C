#include <stdio.h>

int main(void) {
	// printf�� ���ڿ��� ����� �� �ִ�.
	// - �����ϰ� ����, ��� ó�����ִ� ������ �̿��Ѵ�.
	/*
	// �������� ���ڿ��� �ٲٰ�, �Ʒ��� ���� ��ġ�ϸ� ������ �ȴ�.
	char word[100] = "123"; // '1' '2' '3'
	printf("�̰��� num�� ����� ");
	printf(word);
	printf("�Դϴ�.\n");
	*/
	/*
	// ������ ��������� ����� ���� �ҷ��ͼ� �� �� �ֵ��� ���ش�.
	printf("�̰��� num�� ����� %d�Դϴ�.\n", num);
	*/

	char ch = 'A';
	int num = 65;
	double fnum = 3.14;
	char word[100] = "APPLE";
	// %c : ����� ���ڷ� �ٲ㼭 ���
	printf("ch : %c\n", ch);	// ���ڴ� �翬�� ����
	/*
	// printf("num : %c\n", num);	// ������ ���������� 0 ~ 127������ ����
	// printf("fnum : %c\n", fnum);	// �Ұ�
	// printf("word : %c\n", word);	// �Ұ�
	*/

	// %s : ���ڿ��� ���ؼ��� ��� ����. �� �ܴ� �ڵ尡 ����.
	printf("word : %s\n", word); // ���ڿ� ������ ������ Ư���Ͽ� �����ؾ� ��.
	/*
	printf("ch : %s\n", ch);
	printf("num : %s\n", num);
	printf("fnum : %s\n", fnum);
	*/
	
	// %d : �������·� �ٲ㼭 ���
	printf("num : %d\n", num);
	/*
	printf("ch : %d\n", ch);	// -128 ~ +127���� ������ �� ������...���� �Ⱦ�.
	printf("fnum : %d\n", fnum);
	printf("word : %d\n", word);
	*/

	// %f : �Ǽ����·� �ٲ㼭 ���
	// �Ҽ����� ��Ȯ���� �ǹ��ϸ�, �Ҽ��� 6�ڸ������� 3.14�� �����Ѵٴ� ���� �ǹ���
	printf("fnum : %f\n", fnum);
	/*
	printf("ch : %f\n", ch);
	printf("num : %f\n", num);
	printf("word : %f\n", word);
	*/
	return 0;
}