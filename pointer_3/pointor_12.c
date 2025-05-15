#include<stdio.h>

int main() {
	int a = 300;
	int* p;
	printf("%d\n", a);
	p =&a;

	printf("%p\n",p);
	printf("%d",*p);//포인터 변수 *=> 그 주소에 가서 그 값을 꺼내옴
	return 0;
}