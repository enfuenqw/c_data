#include<stdio.h>

void call_value(int icopy);
void call_refer(int* ip);
int main(){
	int i = 777;
	call_value(i);
	printf("�� ȣ�� : %d\n", i);//777
	//icopy�� i�� ���� �������� �ʱ� ������ 777
	call_refer(&i);
	printf("�Լ� ȣ�� : %d\n",i);//888
	//ip�� i�� �ּҰ� ���� ������ 888
	return 0;
}

void call_value(int icopy) {//icopy�� i�� ���� 777 ����
	icopy = 888;//icopy�� 888����
}

void call_refer(int *ip){//ip�� i�� �ּ� ����
	*ip = 888;//�ּҰ� ����Ű�� ��
}