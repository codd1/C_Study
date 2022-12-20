#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str1[100] = "Hello";
	char str2[] = "Hello";
	char str3[100] = "\0";
	char str4[100] = "\n";

	printf("%zu %zu\n", sizeof(str1), strlen(str1));	//100 5
	printf("%zu %zu\n", sizeof(str2), strlen(str2));	//6 5
	printf("%zu %zu\n", sizeof(str3), strlen(str3));	//100 0
	printf("%zu %zu\n", sizeof(str4), strlen(str4));	//100 1

	printf("%zu", sizeof(size_t));
	return 0;
}