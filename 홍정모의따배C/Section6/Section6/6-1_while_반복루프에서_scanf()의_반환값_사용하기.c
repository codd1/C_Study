#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, sum = 0;
	int status;
	
	printf("Enter an integer (q to quit) : ");
	status = scanf("%d", &num);		// scanf�� ���� ���� �Է� ���� (���⼭�� 1)

	while (status == 1) {		//equality operator
		sum = sum + num;

		printf("Enter next integer (q to quit) : ");
		status = scanf("%d", &num);		// ������ �ƴ϶� ���ڸ� �Է��ϸ� �Է� ������ 0���� �ļ� while�� ����.
	}
	
	printf("Sum : %d", sum);

	return 0;
}