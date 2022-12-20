#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[10];

	int num = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < num; i++) {
		arr[i] = (i + 1) * 100;
	}

	int* ptr = arr;
	//printf("%p %p %p %p %p %p\n", ptr, &ptr, arr, &arr[0], &arr, arr[0]);
	printf("%d %d %d %d %d %d\n", ptr, &ptr, arr, &arr[0], &arr, arr[0]);

	ptr += 2;
	printf("%p %p %p\n", ptr, arr + 2, &arr[2]);

	// arr += 2;	// Not working
	
	printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);

	//Warning
	printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);


	// 어떻게 작성하냐에 따라 결과가 다르게 나타난다.
	for (int i = 0, *ptr = arr; i < num; i++) {
		printf("%d %d\n", *ptr++, arr[i]);
		printf("%d %d\n", *(ptr + i), arr[i]);
		printf("%d %d\n", *ptr + i, arr[i]);
		printf("\n");
	}
	return 0;
}