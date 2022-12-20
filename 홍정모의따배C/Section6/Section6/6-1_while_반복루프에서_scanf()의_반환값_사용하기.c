#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, sum = 0;
	int status;
	
	printf("Enter an integer (q to quit) : ");
	status = scanf("%d", &num);		// scanf의 리턴 값은 입력 갯수 (여기서는 1)

	while (status == 1) {		//equality operator
		sum = sum + num;

		printf("Enter next integer (q to quit) : ");
		status = scanf("%d", &num);		// 정수가 아니라 문자를 입력하면 입력 갯수를 0으로 쳐서 while문 종료.
	}
	
	printf("Sum : %d", sum);

	return 0;
}