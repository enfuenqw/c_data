#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main() {
	char buffer[80] = "";
	char key[] = "C";

	do {
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����?");
		gets(buffer);
	}
	while (strcmp(key, buffer) != 0);//���� ������ �ݺ�
	printf("�¾ҽ��ϴ�!");
	//strcmp�� �� ���ڿ��� ���Ͽ� ������ 0����� ����
	// �ƴϸ� 0�� �ƴѰ�
	//strcpy:����(����)
	//strcat:����
	//strcmp:���� ��

	return 0;
}