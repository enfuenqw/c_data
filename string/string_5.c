#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//	//int ch;
//	//ch = getchar();
//	//putchar(ch);
//
//	return 0;
//}

int main() {
	char name[100];
	char address[100];

	printf("�̸��� �Է��ϼ���:");
	gets_s(name, sizeof(name));//gets(name);

	printf("���� �����ϴ� �ּҸ� �Է��ϼ���:");
	gets_s(address, sizeof(address));//gets(address);
	
	puts(name);
	puts(address);

	return 0;
}