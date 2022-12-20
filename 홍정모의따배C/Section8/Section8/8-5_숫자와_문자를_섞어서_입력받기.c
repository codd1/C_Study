#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 숫자와 문자를 섞어서 입력 받을 때 scanf로 다 받는 것이 아니라
// getchar로 문자를 받고, scanf로 숫자를 받는 방법에 대해 생각해본다.

void display(char cr, int lines, int width);

int main() {
	char c;
	int rows, cols;

	printf("Input one character and tow integers: \n");

	while ((c = getchar()) != '\n') {
		scanf("%d %d", &rows, &cols);
		while (getchar() != '\n') continue;
		display(c, rows, cols);

		printf("Input another character and two integers: \n");
		printf("Press Enter to quit.\n");
	}
}

void display(char cr, int lines, int width) {
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < width; j++) {
			putchar(cr);
		}
		printf("\n");
	}
}