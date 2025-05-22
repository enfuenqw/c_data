#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

//int main() {
//	char string[80];
//
//	strcpy(string,"Hello world from ");//복사
//	strcat(string, "strcpy ");				     //끝에 붙여 넣는다
//	strcat(string, "and ");
//	strcat(string, "strcat!");
//	printf("string = %s\n", string);
//	return 0;
//}

int main() {
	char a[11] = "KOREA";
	char b[] = "12345";

	strcat(a, b);//striong.h에 포함
					   //b를 a에 연결
					   //strcat는 null값을 제거하고 연결, 사이공백 없음
	puts(a);//문자열 출력,줄바꿈 포함
		//puts()=>문자열을 화면에 출력후 커서를 다음줄로 처음으로 이동
	printf("%s", b);
	return 0;
}