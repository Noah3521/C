#include <stdio.h>

int main(void) {
	// 관계연산자 : 경우의 수를 골라내는 연산자.
	// - 이 연산자가 사용된 연산식은, 조건식이라 부르며 구별한다.
	// - 참(1)/거짓(0) 결과를 얻는 것이 목적이다.

	// 읽는 방식 : 좌측이 우측에 대해서 어떠한가? 로 읽는다.
	int num1 = 10;
	int num2 = 5;
	printf("result1 : %d\n", num1 > num2); // 초과
	printf("result2 : %d\n", num1 < num2); // 미만
	printf("result3 : %d\n", num1 >= num2); // 이상
	printf("result4 : %d\n", num1 <= num2); // 이하
	printf("result5 : %d\n", num1 == num2); // 일치
	printf("result6 : %d\n", num1 != num2); // 불일치

	// 주의사항1 : 크기를 비교할 수 있는 것에 대해서만 사용 가능
	// - 크기 비교가 안되는 것들은 써봤자 무의미할 수 있다.
	// 가능한 것 : 문자 / 정수 / 실수
	// 불가능한 것 : 문자열
	char word1[100] = "ABC";
	char word2[100] = "ABC";
	printf("result7-1 : %d\n", "ABC" == "ABC");	// 저장공간 그자체를 비교하는 방식이라서
	printf("result7-2 : %d\n", word1 == "ABC");	// 저장된 '값' 의 비교가 안됨
	printf("result7-3 : %d\n", word1 == word2);
	// 주의사항2. 2개이상 절대로 쓰면 안됨.
	// -> 표현하고 싶은 조건식이 있을 경우, '증명' 과정을 묘사해야 한다.
	int x = 9;
	printf("result8-1 : %d\n", 8 < x < 4);	// 둘 다 성립하지 않는
	printf("result8-2 : %d\n", 4 > x > 2);	// 말도 안되는 연산이니 주의할 것
	return 0;
}