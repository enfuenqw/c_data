#include<stdio.h>//printf���� ����ϱ� ���� ��ó����
int main(void)//�Լ� ����
{
	int i = 10;//������ ������ 10����
	double f = 12.3; //�Ǽ��� ������ 12.3����
	int* pi = NULL;//������ ����

	double* pf = NULL;//������ ����
	pi = &i;//������ i�� �ּҸ� �����Ϳ� ����
//	pf = &f;//�Ǽ��� f�� �ּҸ� �����Ϳ� ����

	printf("%p %p %d \n", *pi, &i,i);//i�� ���� �ּ� ���
	printf("%p %p %.1f \n", pf, &f,f);//f�� ���� �ּ� ���
	return 0;
}