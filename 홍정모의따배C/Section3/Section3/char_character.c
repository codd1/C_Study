#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	char fruit_name;

	printf("What is your favorite fruit?\n");
	scanf("%c", &fruit_name);	//fruit_name의 주소를 가져온다.

	printf("My favorite fruit is %c", fruit_name);

}