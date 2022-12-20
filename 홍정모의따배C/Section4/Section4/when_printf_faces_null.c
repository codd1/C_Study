#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[20] = "Hello, \0World!\n";
	
	printf("%s\n", str);
	printf("string size is %d\n", sizeof(str));
	printf("%c\n", str[10]);
	printf("%c\n", str[11]);

	return 0;
}