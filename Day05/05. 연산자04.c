#include <stdio.h>

int main(void) {
	// ���մ��Կ����� : ���Կ��� + �������
	int count = 100;
	printf("������ ���� : %d��\n", count);
	printf("5���� ������ ��� : %d��\n", count + 5);
	count = count + 5; // ���ο� ���� ���� / ��ü
	printf("5���� ������ ���� : %d��\n", count);
	count += 5;		// ���� ���� ���� ��ȭ�� ����
	printf("5���� ������ ���� : %d��\n", count);

	// +@ : ����������. ���׿�����. 1�� ����/����
	// - ���Կ����̴� ������ ��
	// ��ġ
	++count; // ����. ���Ҵ� --count;
	printf("count : %d\n", count);
	// ��ġ
	count++; // ����. ���Ҵ� count--;
	printf("count : %d\n", count);
	return 0;
}