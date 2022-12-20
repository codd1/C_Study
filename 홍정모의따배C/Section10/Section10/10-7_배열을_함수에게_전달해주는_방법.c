#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double*, int n);
//double average(double arr[], int n);

int main() {
	double arr1[5] = { 10,13,12,7,8 };
	//double arr2[5] = { 1.8,-0.2,6.3,13.9,20.5 };
	double arr2[3] = { 1.8,-0.2,6.3 };

	printf("Address = %p\n", arr1);
	printf("Size = %zd\n", sizeof(arr1));	// 40
	printf("Address = %p\n", arr2);
	printf("Size = %zd\n", sizeof(arr2));	// 24

	printf("Avg = %f\n", average(arr1, 5));
	printf("Avg = %f\n", average(arr2, 3));

	return 0;
}


//double average(double arr[], int n)
double average(double* arr, int n) {	// *arr1 == arr1[]

	printf("Size = %zd in average function\n", sizeof(arr));	// 4

	double avg = 0.0;
	for (int i = 0; i < n; i++) {
		avg += arr[i];
	}
	avg /= (double)n;

	return avg;
}