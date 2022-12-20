#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define COLS 4

int main() {
	
	int arr1[2] = { 1,2 };
	int arr2[2][COLS] = { {1,2,3,4}, {5,6,7,8} };

	printf("%d\n", sum_1d(arr1, 2));
	printf("%d\n", sum_2d(arr2, 2));
	printf("\n");

	// ���� ���� ���� ���������� �־��� �� �ִ�. (�ϵ� �ڵ��� ���)
	// ���ͷ� �迭�� �ּҸ� ���ڷν� ������.
	printf("%d\n", sum_1d((int[2]) { 1, 2 }, 2));
	printf("%d\n", sum_2d((int[2][COLS]) { {1, 2, 3, 4}, { 5,6,7,8 } }, 2));
	printf("\n");

	int* ptr1;
	int(*ptr2)[COLS];

	// ���� ���� ���� ���������� �־��� �� �ִ�. (�ϵ� �ڵ��� ���)
	// ���ͷ� �迭�� �ּҰ� ���Եȴ�.
	ptr1 = (int[2]){ 1,2 };
	ptr2 = (int[2][COLS]){ {1,2,3,4},{5,6,7,8} };

	printf("%d\n", sum_1d(ptr1, 2));
	printf("%d\n", sum_2d(ptr2, 2));
	printf("\n");

	return 0;
}

// 1���� �迭 ���� ��� ���ϱ�
int sum_1d(int arr[], int n) {
	int r, tot = 0;
	for (r = 0; r < n; r++) {
		tot += arr[r];
	}
	return tot;
}

// 2���� �迭 ���� ��� ���ϱ�
int sum_2d(int arr[][COLS], int n) {
	int r, c, tot = 0;
	for (r = 0; r < n; r++) {
		for (c = 0; c < COLS; c++) {
			tot += arr[r][c];
		}
	}
	return tot;
}