#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//int a = 1234;
	//printf("%p\n", &a);
	//printf("%d\n", a);

	//// 런타임 에러 (Runtime Error)
	//int* ptr = 1234;
	//printf("%p\n", ptr);
	//printf("%d\n", *ptr);

	int* safer_ptr;	// =NULL;
	int a = 123;
	safer_ptr = &a;

	if (a % 2 == 0) {
		safer_ptr = &a;
	}

	printf("%zd\n", sizeof(char*));
}