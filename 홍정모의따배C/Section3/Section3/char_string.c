#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	char fruit_name[40];	//char �迭 ��ü�� �ּ�

	printf("What is your favorite fruit?\n");
	scanf("%s", fruit_name);		//�׷��Ƿ� & �ʿ� ����

	printf("My favorite fruit is %s!", fruit_name);

}