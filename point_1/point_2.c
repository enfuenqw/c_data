#include<stdio.h>

int main() {
	//int i = 10;
	//double f = 12.3;
	//int* pi = NULL;

	//double* pf = NULL;
	//pi = &i;
	//pf = &f;

	//printf("%p %p \n",pi,&i);
	//printf("%p %p\n",pf, &f);

	int k = 300;
	int y = 20;

	printf("%d\n", k);
	printf("%p\n", &k);

	int* po = NULL;
	po = &y;
	printf("%p\n", po);
	printf("%d\n", *po);
	return 0;
}