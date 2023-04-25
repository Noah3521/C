#include <stdio.h>

int main(void) {
	// printf는 문자열만 출력할 수 있다.
	// - 복잡하고 힘들어서, 대신 처리해주는 서식을 이용한다.
	/*
	// 정수값을 문자열로 바꾸고, 아래와 같이 배치하면 정보가 된다.
	char word[100] = "123"; // '1' '2' '3'
	printf("이것은 num에 저장된 ");
	printf(word);
	printf("입니다.\n");
	*/
	/*
	// 변수는 저장공간에 저장된 것을 불러와서 쓸 수 있도록 해준다.
	printf("이것은 num에 저장된 %d입니다.\n", num);
	*/

	char ch = 'A';
	int num = 65;
	double fnum = 3.14;
	char word[100] = "APPLE";
	// %c : 대상을 문자로 바꿔서 출력
	printf("ch : %c\n", ch);	// 문자는 당연히 가능
	/*
	// printf("num : %c\n", num);	// 정수도 가능하지만 0 ~ 127까지만 가능
	// printf("fnum : %c\n", fnum);	// 불가
	// printf("word : %c\n", word);	// 불가
	*/

	// %s : 문자열에 대해서만 사용 가능. 그 외는 코드가 터짐.
	printf("word : %s\n", word); // 문자열 변수는 구조가 특이하여 구별해야 함.
	/*
	printf("ch : %s\n", ch);
	printf("num : %s\n", num);
	printf("fnum : %s\n", fnum);
	*/
	
	// %d : 정수형태로 바꿔서 출력
	printf("num : %d\n", num);
	/*
	printf("ch : %d\n", ch);	// -128 ~ +127까지 저장할 수 있지만...굳이 안씀.
	printf("fnum : %d\n", fnum);
	printf("word : %d\n", word);
	*/

	// %f : 실수형태로 바꿔서 출력
	// 소수점은 정확도를 의미하며, 소수점 6자리까지는 3.14를 보증한다는 것을 의미함
	printf("fnum : %f\n", fnum);
	/*
	printf("ch : %f\n", ch);
	printf("num : %f\n", num);
	printf("word : %f\n", word);
	*/
	return 0;
}