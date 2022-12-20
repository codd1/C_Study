#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM 5

int main() {
	
	int input[NUM];
	int sum = 0;

	printf("Enter %d numbers : ",NUM);
	for (int i = 0; i < NUM; i++) {
		scanf("%d", &input[i]);
		sum += input[i];
	}

	printf("Sum : %d\n", sum);

}