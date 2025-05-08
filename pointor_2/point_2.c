#include<stdio.h>//printf등을 사용하기 위한 전처리기
int main(void)//함수 시작
{
	int i = 10;//정수형 변수에 10저장
	double f = 12.3; //실수형 변수에 12.3저장
	int* pi = NULL;//포인터 선언

	double* pf = NULL;//포인터 선언
	pi = &i;//정수형 i의 주소를 포인터에 대입
//	pf = &f;//실수형 f의 주소를 포인터에 대입

	printf("%p %p %d \n", *pi, &i,i);//i의 값과 주소 출력
	printf("%p %p %.1f \n", pf, &f,f);//f의 값과 주소 출력
	return 0;
}