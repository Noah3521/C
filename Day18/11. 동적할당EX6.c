#include <stdio.h>
#include <malloc.h>
// scanf_s�� �������� �Է��Լ��� �����δ� ���� ����
int input_value(char* msg) {
	int data = 0;
	printf(msg); scanf_s("%d", &data);
	return 0;
}
int main(void) {
	// ũ�Ⱑ ���̴�, �ּҰ����� �ٲٸ� ���� 8����Ʈ��ŭ�� �����ؼ� ó���ϸ� �ȴ�.
	// -> �迭���� ū ��������� ������ �͵��� ������� �����Ҵ��� �Ѵ�.
	// -> �迭��, �Լ� ���ο���, ũ�Ⱑ ���ѵǾ� ���� ���� �� ����.
	//    ���� : �Լ� ���ο��� ������ ��ü �ѿ뷮 1 MB ������ ����
	//          �����Ҵ��� 32��Ʈ�� ��� 2 GB ������ ����
	//          64��Ʈ�� ��� ���뷮�� ���Ǵ� �������� ����. (���� 8GB���� ����)
	int size = input_value("�迭�� ũ�� �Է� >> ");
	int* parr = NULL;
	int result = 0;
	if (size <= 0) printf("�߸��� ũ���Դϴ�.\n");
	else {
		parr = (int*)malloc(sizeof(int) * size);
		if (parr != NULL) {
			printf("������ %d�� �Է� >> ", size);
			for (int i = 0; i < size;i+=1) {
				parr[i] = input_value("");
			}
			for (int i = 0; i < size; i += 1) {
				result += parr[i];
			}
			printf("�Էµ� ������ ���\n%.2f\n", result / (double)size);
		}
	}
	if (parr != NULL) {
		free(parr);
	}
	return 0;
}