#include <stdio.h>
#include <malloc.h>

int main(void) {
	// 15����Ʈ�� ���ڹ迭�̶��...
	// �����ڷ����� 1����Ʈ�̰�, 15�� �ɷ��� ������ 15�� �־�� �մϴ�.
	int size = 15;
	char* pword = NULL;
	if (size > 0) {
		pword = (char*)malloc(sizeof(char) * size);
		if (pword != NULL) {
			printf("���ڿ� �Է� >> ");
			scanf_s("%s", pword, size);
			printf("�ܾ� : %s\n", pword);
		}
		else printf("�迭 ���� ����\n");
	}
	else printf("�߸��� ũ���Դϴ�.\n");

	if (pword != NULL) {
		free(pword);
	}
	return 0;
}