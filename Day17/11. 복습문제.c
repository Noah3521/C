#include <stdio.h>
#include <string.h> // 문자열을 쉽게 다루기 위한 함수를 불러옵니다.

void select_big(int* target, int num1, int num2) {
	if (num1 > num2)		*target = num1;
	else if (num2 > num1)	*target = num2;
	else					*target = 0;
}
void EX1(void) {
	// 복습문제1
	// 반환형없이 전달받은 값의 크기를 비교하여 제일 큰 수를
	// 포인터 변수를 통해 반환하는 함수를 정의하세요. 서로 같을 경우 0이 나옵니다.
	int result1;
	select_big(&result1, 19, 3); printf("결과1-1 : %d\n", result1); // 19
	select_big(&result1, -5, -1); printf("결과1-2 : %d\n", result1); // -1
	select_big(&result1, 3, 3); printf("결과1-3 : %d\n", result1); //  0
}

void save_to(int* parr, int size, int num) {
	for (int i = 0; i < size; i += 1) {
		parr[i] = num * (i + 1);
	}
}
void EX2(void) {
	// 복습문제2
	// 배열에 지정한 정수의 배수들을 저장하는 함수를 정의하세요.
	// 8 16 24 32 40 48이 출력됩니다.
	int arr[6];
	save_to(arr, sizeof(arr) / sizeof(int), 8);
	printf("결과2\n");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i += 1) {
		printf(" %d", arr[i]);
	} printf("\n");
}

int count_word(char* pword) {
	int count = 0;
	while (pword[count] != 0) { count += 1; }
	return count;
}
void EX3(void) {
	char word1[15] = "ApplePie";
	char word2[10] = "Apple";
	printf("word1의 길이 : %d\n", sizeof(word1) / sizeof(char));
	printf("저장된 문자의 수량 : %d\n", count_word(word1)); // 8
	printf("word2의 길이 : %d\n", sizeof(word2) / sizeof(char));
	printf("저장된 문자의 수량 : %d\n", count_word(word2)); // 5
	/*
	// strlen : 문자열의 실제 저장크기를 구해준다.
	char word1[10] = "ApplePie";
	char word2[8] = "Apple";
	char word3[6] = "Apple";
	// 문자열의 끝을 확인하여, 해당 지점에서 멈춘다.
	printf("%d %d %d\n", word1[8], word2[5], word3[5]);
	// 그래서 실제 저장된 문자들의 수량만 체크할 수 있음.
	printf("%d %d %d\n", strlen(word1), strlen(word2), strlen(word3));
	*/
}

void copy_str(char* dest, char* source) {
	// strcpy_s는 strlen 등을 내부에서 사용하며, 조건문으로 복사가능/불가를 처리한다.
	// 그 과정에서 정확하게 저장된 만큼만 복사하여 반복횟수를 줄인다.
	for (int i = 0; i < 9; i += 1) {
		dest[i] = source[i];
	}
}
void EX4(void) {
	char word1[9] = "ApplePie";
	char word2[9];
	copy_str(word2, word1);
	printf("%s\n", word1); // ApplePie
	printf("%s\n", word2); // ApplePie
	/*
	// strcpy_s : 문자열을 복사하는 함수
	char word1[10] = "ApplePie";
	char word2[15]; char word3[9]; char word4[5];

	// 1. 공간의 크기가 더 크면 저장된 만큼을 몽땅 복사하면 됨
	strcpy_s(word2, sizeof(word2) / sizeof(char), word1);
	printf("word2 : %s\n", word2);

	// 2. 실제 저장된 값의 크기보다 공간이 더 크면 문제없이 복사됨 - 문자열의 끝에서 멈춘다.
	strcpy_s(word3, sizeof(word3) / sizeof(char), word1);
	printf("word3 : %s\n", word3);

	// 3. 저장된 값보다 공간이 작으면 저장 못함. 조건문으로 통제해야 된다.
	if (sizeof(word4) / sizeof(char) > strlen(word1)) {
		strcpy_s(word4, sizeof(word4) / sizeof(char), word1);
		printf("word4 : %s\n", word4);
	}
	else printf("복사불가 : 저장공간이 너무 작습니다.\n");
	*/
}

int main(void) {
	// EX1();
	// EX2();
	EX3();
	EX4();
	return 0;
}