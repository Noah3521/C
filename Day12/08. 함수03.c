#include <stdio.h>
// 2���� : �Է¹��� �ʰ�, �ڵ尡 �������µ� �ʿ��� �ڷḸ �޾Ƽ�
//        �̸� �Լ� ���ο����� �̿��ϴ� �Լ�
// �Ű����� - �Լ��� ȣ���� �� ���� �־��� �� �ְ�..
//           �̸� ����޾Ƽ� �ʱ�ȭ�� ������ �����ϴ� ����
// �� return���� ���� �ܺη� �������� �ʴ´�.
//   print, show, put �� ����, "�����ش�" �� ǥ���� ���ȴ�.
void show_triangle(int size) {
	if (size > 0) {
		for (int y = 1; y <= size; y += 1) {
			for (int x = 0; x < y; x += 1) {
				printf("#");
			} printf("\n");
		}
	}
	else printf("����� ������ �����ϴ�.\n");
}
// �Ű������� �ʿ��Ͻø� ��ǥ�� �����ؼ� �߰��ϸ� �ȴ�.
void show_triangle_reverse(int size, char ch) {
	if (size > 0) {
		for (int y = 1; y <= size; y += 1) {
			for (int x = 0; x < size - y; x += 1) {
				printf(" ");
			}
			for (int x = 0; x < y; x += 1) {
				printf("%c", ch);
			} printf("\n");
		}
	}
	else printf("����� ������ �����ϴ�.\n");
}

int main(void) {
	// 2������ ȣ�� : ��ȣ�ȿ� �ʿ��� ��(���/���� �������)�� ��ġ�Ͽ� ȣ���Ѵ�.
	show_triangle(3);
	show_triangle_reverse(3, '@');
	return 0;
}