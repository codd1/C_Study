#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int* ptr = 0;	// try double* long long*, char*

	printf("%p %lld\n", ptr, (long long)ptr);	// lld�� 10������ �������ؼ�
	
	ptr++;

	printf("%p %lld\n", ptr, (long long)ptr);

	//ptr = -ptr;		// Not working
	//ptr = +ptr;		// Not working

	/* Subtraction*/
	int arr[10];
	int* ptr1 = &arr[3], * ptr2 = &arr[5];

	//int* ptr3 = ptr1 + ptr2;	// Not working
	int i = ptr2 - ptr1;	// working!  ptr2 - ptr1��  ptr1�� ptr2�� �ε��� ���̸� �� �� �ִ�.

	printf("%p %p %d\n", ptr1, ptr2, i);

	return 0;
}