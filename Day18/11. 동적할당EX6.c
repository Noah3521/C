#include <stdio.h>
#include <malloc.h>
// scanf_s를 재포장한 입력함수는 만들어두는 편이 좋음
int input_value(char* msg) {
	int data = 0;
	printf(msg); scanf_s("%d", &data);
	return 0;
}
int main(void) {
	// 크기가 몇이던, 주소값으로 바꾸면 몽땅 8바이트만큼만 공유해서 처리하면 된다.
	// -> 배열같이 큰 저장공간을 가지는 것들을 대상으로 동적할당을 한다.
	// -> 배열은, 함수 내부에서, 크기가 제한되어 많이 만들 수 없음.
	//    참고 : 함수 내부에서 변수는 전체 총용량 1 MB 까지만 가능
	//          동적할당은 32비트일 경우 2 GB 까지만 가능
	//          64비트일 경우 램용량이 허용되는 범위까지 가능. (보통 8GB까지 제한)
	int size = input_value("배열의 크기 입력 >> ");
	int* parr = NULL;
	int result = 0;
	if (size <= 0) printf("잘못된 크기입니다.\n");
	else {
		parr = (int*)malloc(sizeof(int) * size);
		if (parr != NULL) {
			printf("정수값 %d개 입력 >> ", size);
			for (int i = 0; i < size;i+=1) {
				parr[i] = input_value("");
			}
			for (int i = 0; i < size; i += 1) {
				result += parr[i];
			}
			printf("입력된 값들의 평균\n%.2f\n", result / (double)size);
		}
	}
	if (parr != NULL) {
		free(parr);
	}
	return 0;
}