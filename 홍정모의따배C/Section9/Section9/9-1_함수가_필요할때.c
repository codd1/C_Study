#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>		// strlen()

#define WIDTH 30
#define NAME "Chae-Young Hong"
#define ADDRESS "Goyang, Korea"

void print_multiple_chars(char c, int n_stars) {
	for (int i = 0; i < n_stars; i++) {
		printf("%c", c);
	}
}

void print_centered_str(char str[]) {
	int n_blanks = 0;
	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_chars(' ', n_blanks);
	printf("%s\n", str);
}

int main() {

	print_multiple_chars('*', WIDTH);
	printf("\n");

	print_centered_str(NAME);
	print_centered_str(ADDRESS);

	print_multiple_chars('*', WIDTH);

	return 0;
}