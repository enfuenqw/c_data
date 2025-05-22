#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main() {
	char buffer[80] = "";
	char key[] = "C";

	do {
		printf("임베디드 장치에 가장 많이 사용되는 언어는?");
		gets(buffer);
	}
	while (strcmp(key, buffer) != 0);//같지 않으면 반복
	printf("맞았습니다!");
	//strcmp는 두 문자열을 비교하여 같으면 0결과로 나옴
	// 아니면 0이 아닌값
	//strcpy:복사(대입)
	//strcat:연결
	//strcmp:문자 비교

	return 0;
}