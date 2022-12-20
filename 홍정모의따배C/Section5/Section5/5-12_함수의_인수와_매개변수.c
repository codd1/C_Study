#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n);		// ANSI function prototype declaration
int main() {

	int i = 5;
	char c = '#';
	float f = 7.1f;

	draw(i);		// i = argument
	draw((int)c);	// c = argument
	draw((int)f);	// f = argument

	return 0;
}

void draw(int n) {		// int n = parameter
	while (n-- > 0)
		printf("*");
	printf("\n");
}