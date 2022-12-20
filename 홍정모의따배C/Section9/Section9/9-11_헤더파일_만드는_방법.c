#define _CRT_SECURE_NO_WARNINGS
#include "my_print_functions.h"		// 책의 차례(책자) 느낌
// my_print_functions.c에 정의

int main() {
	print_hello();
	print_hi();
	print_hello();
	print_hi();
	print_str("No one lives forever.");
	print_str("Valar morghulis.");

	printf("Hello!");

	return 0;
}