#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main() {
	char name[5][10]; //5행10열 몇명의 이름->5 그 이름은 각각 9자
	char addr[5][30];//몇명의 주소->5 주소는 각각 29자
	char search[10];//찾고자하는 사람의 이름 9자이내로
	int i;
	//이름과 주소 입력
	//입력개수 5개 정함
	for (i = 0; i < 5; i++) {//5명 입력, 0~4번째 방에 입력
		printf("이름 %d:",i+1); //i가 0이지만 출력문에는 첫번째 뜻으로 1을 출력하기위해 i+1
		scanf("%s",name[i]);//이름 5명 것을 반복하여 입력받음
		printf("주소 %d:", i + 1);
		scanf("%s", addr[i]);
	}//검색할 이름 입력 받음
	printf("검색할 이름을 입력하세요:");
	scanf("%s", search);

	for (i = 0; i < 5; i++) {
		if (strcmp(name[i], search) == 0) {
			printf("이름:%s\t\t주소:%s", name[i], addr[i]);
			return 0;
		}
	}
	printf("찾는 이름이 없습니다");
	return 0;
}