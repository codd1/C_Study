#define _CRT_SECURE_NO_WARNINGS
#include "my_print_functions.h"		// å�� ����(å��) ����
// my_print_functions.c�� ����

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