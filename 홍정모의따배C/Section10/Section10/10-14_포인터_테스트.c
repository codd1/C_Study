#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a = 10;
	int* ptr = &a;
	
	printf("%p %d %p %p %d %d %d", &a, a, &ptr, ptr, *ptr, sizeof(ptr), sizeof(a));

	int arr[2][3] = { 1,2,3,4,5,6 };

	//printf("%d %d %d %d %d", arr, arr[0], &arr[0], &arr[0][0], arr[0][0]);
}