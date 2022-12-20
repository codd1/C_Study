#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	const int secret_num = 7777;
	int input;

	do {
		printf("Enter secret code : ");
		scanf("%d", &input);
	}
	while (input != secret_num);

	printf("Good!\n");
}