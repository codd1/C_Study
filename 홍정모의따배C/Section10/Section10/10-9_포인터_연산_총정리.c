#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/* Pointer operations
	- Assignment
	- Value finding (deferencing)
	- Taking a pointer address
	- Adding an integer to a pointer
	- Incrementing a pointer
	- Subtracting an integer from a pointer
	- Decrementing a pointer
	- Comparisons */

	int arr[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	ptr1 = arr;		// 배열은 그 자체가 주소 역할을 하므로 * 없어도됨.
	printf("%p %d %p\n", ptr1, *ptr1, &ptr1);

	ptr2 = &arr[2];
	printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

	ptr3 = ptr1 + 4;		// 4바이트*4 = 16바이트가 더해진 주소 (값 500이 있는 주소)
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	//Differencing
	printf("%td\n", ptr3 - ptr1);	// td는 포인터의 차이를 나타낼 때 쓰는 형식지정자

	ptr3 = ptr3 - 4;
	printf("%p %d %p\n", ptr3, *ptr3, &ptr3);

	ptr1++;		// Incrementing
	ptr1--;		// Decrementing
	--ptr1;
	++ptr1;

	if (ptr1 == ptr3) {
		printf("Same\n");
	}
	else {
		printf("Different\n");
	}

	double d = 3.14;
	double* ptr_d = &d;
	if (ptr1 == ptr_d) {	// warning : incompatible type
		printf("Same\n");
	}
	else {
		printf("Different\n");
	}

	return 0;
}