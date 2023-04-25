#include <stdio.h>
// 2형식 : 입력받지 않고, 코드가 굴러가는데 필요한 자료만 받아서
//        이를 함수 내부에서만 이용하는 함수
// 매개변수 - 함수를 호출할 때 값을 넣어줄 수 있고..
//           이를 복사받아서 초기화될 변수를 지정하는 문법
// ※ return으로 값을 외부로 전달하지 않는다.
//   print, show, put 과 같은, "보여준다" 는 표현이 사용된다.
void show_triangle(int size) {
	if (size > 0) {
		for (int y = 1; y <= size; y += 1) {
			for (int x = 0; x < y; x += 1) {
				printf("#");
			} printf("\n");
		}
	}
	else printf("출력할 내용이 없습니다.\n");
}
// 매개변수는 필요하시면 쉼표로 구분해서 추가하면 된다.
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
	else printf("출력할 내용이 없습니다.\n");
}

int main(void) {
	// 2형식의 호출 : 괄호안에 필요한 값(상수/변수 상관없음)을 배치하여 호출한다.
	show_triangle(3);
	show_triangle_reverse(3, '@');
	return 0;
}