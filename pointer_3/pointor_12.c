#include<stdio.h>

int main() {
	int a = 300;
	int* p;
	printf("%d\n", a);
	p =&a;

	printf("%p\n",p);
	printf("%d",*p);//������ ���� *=> �� �ּҿ� ���� �� ���� ������
	return 0;
}