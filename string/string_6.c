#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

//int main() {
//	char string[80];
//
//	strcpy(string,"Hello world from ");//����
//	strcat(string, "strcpy ");				     //���� �ٿ� �ִ´�
//	strcat(string, "and ");
//	strcat(string, "strcat!");
//	printf("string = %s\n", string);
//	return 0;
//}

int main() {
	char a[11] = "KOREA";
	char b[] = "12345";

	strcat(a, b);//striong.h�� ����
					   //b�� a�� ����
					   //strcat�� null���� �����ϰ� ����, ���̰��� ����
	puts(a);//���ڿ� ���,�ٹٲ� ����
		//puts()=>���ڿ��� ȭ�鿡 ����� Ŀ���� �����ٷ� ó������ �̵�
	printf("%s", b);
	return 0;
}