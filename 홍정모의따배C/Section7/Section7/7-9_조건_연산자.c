#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int number;
	scanf("%d", &number);

	bool is_even;

	is_even = (number % 2 == 0) ? true : false;

	is_even == true ? printf("Even") : printf("Odd");

	/*if(is_even) {
		printf("Even");
	}
	else {
		printf("Odd");
	}*/

	return 0;
}