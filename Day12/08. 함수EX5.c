#include <stdio.h>
int make_expo(int num, int count) {
	int result = 1;
	while (count > 0) {
		result *= num;
		count -= 1;
	}
	return result;
}

int main(void){
	// �ŵ�������, ������� ������ �Ǽ������ ���´�.
	// - C������ �̸� ���� �������� �ȴ�.
	printf("���1 : %d\n", make_expo( 2,	  4));
	printf("���2 : %d\n", make_expo( 3,  4));
	printf("���3 : %d\n", make_expo( 9,  0));
	printf("���4 : %d\n", make_expo(-2,  6));
	printf("���5 : %d\n", make_expo( 2, -5));
	return 0;
}