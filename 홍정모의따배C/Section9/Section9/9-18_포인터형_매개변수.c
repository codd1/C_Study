#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *u, int *v) {	// 매개변수

	printf("%p %p\n", u, v);

	int temp = *u;
	*u = *v;
	*v = temp;
}

int main() {
	int a = 123;
	int b = 456;

	printf("%p %p\n", &a, &b);

	swap(&a, &b);		// 인자
	printf("%d %d\n", a, b);	// 값이 변한다.

	return 0;
}