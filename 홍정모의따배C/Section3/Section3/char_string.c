#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	char fruit_name[40];	//char 배열 자체가 주소

	printf("What is your favorite fruit?\n");
	scanf("%s", fruit_name);		//그러므로 & 필요 없음

	printf("My favorite fruit is %s!", fruit_name);

}