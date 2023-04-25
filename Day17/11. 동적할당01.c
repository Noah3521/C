#include <stdio.h>
#include <malloc.h> // Memory ALLOCation의 약자

int main(void) {
	/*
	// 정적할당
	// 1. 필요한 만큼의 공간을 요청( int - 4 Bytes )
	// 2. 공간의 용도를 설정( int )
	// 3. 공간을 쓸 수 있는 이름을 설정( num )
	int num;
	*/

	/*
	// 동적할당
	// 1. 필요한 만큼의 공간을 요청 - 정수값이 들어가진, 실수가 발생한다.
	// 2. 공간의 용도를 설정 - 주소값을 형변환하고, 다루는 자료형도 동일하게 준비
	// 3. 공간을 쓸 수 있는 이름을 설정( *변수명으로 사용하게 됨 )
	*/
	// 이후의 사용 - 포인터변수를 이용해 공간을 이용한다.
	int* pnum = (int*)malloc(sizeof(int));	// 반환값은 주소값이니 주의
	double* pfnum = (double*)malloc(sizeof(double));
	*pnum = 100;
	*pfnum = 1.17;
	printf("%d %.2f\n", *pnum, *pfnum);
	printf("정수, 실수 >> ");
	scanf_s("%d", pnum); scanf_s("%lf", pfnum);
	printf("새로운 값 : %d, %.2f\n", *pnum, *pfnum);
	printf("연산결과1 : %.2f\n", *pnum + *pfnum);
	printf("연산결과2 : %.2f\n", *pnum / *pfnum);
	
	// 동적할당의 주의사항 : 생성한 변수의 용도가 끝났으면 제거해야 된다.
	free(pnum);	
	free(pfnum);	// 저장된 값도 함께 파괴한다.
	return 0;
}