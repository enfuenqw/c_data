#include<stdio.h>
void apt();
void akt();
int main() {
	apt();
	akt();


	return 0;
}



void apt() {
	int i[5] = { 1,2,3,4,5 };

	printf("%d\n", i[0]);
	printf("%d\n", i[1]);
	printf("%d\n", i[2]);
	printf("%p\n", i);
	printf("%p\n", &i[0]);
	printf("%p\n\n", &i);

	printf("%p\n",&i[1]);
	printf("%p\n",i+1);
}

void akt() {
	int a[4];
	//a-> a�� ù�ּ�
	//a->a�� ����Ű�� ���� �� a[0]�ּҰ� ���� �� ��
	*a = 111;//a[0] = 111
	*(a + 1) = 222;//a[1]=222
	*(a + 2) = 333;//a[2]=333
	*(a + 3) = 444;//a[3]=444
}