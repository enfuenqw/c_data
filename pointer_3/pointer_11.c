#include<stdio.h>

void call_value(int icopy);
void call_refer(int* ip);
int main(){
	int i = 777;
	call_value(i);
	printf("값 호출 : %d\n", i);//777
	//icopy와 i는 값을 공유하지 않기 때문에 777
	call_refer(&i);
	printf("함수 호출 : %d\n",i);//888
	//ip와 i는 주소가 같기 때문에 888
	return 0;
}

void call_value(int icopy) {//icopy에 i의 값인 777 저장
	icopy = 888;//icopy에 888저장
}

void call_refer(int *ip){//ip에 i의 주소 저장
	*ip = 888;//주소가 가르키는 값
}