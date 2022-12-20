#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���ڿ� ���ڸ� ��� �Է� ���� �� scanf�� �� �޴� ���� �ƴ϶�
// getchar�� ���ڸ� �ް�, scanf�� ���ڸ� �޴� ����� ���� �����غ���.

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