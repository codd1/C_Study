#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// type qualifiers(한정자): const, volatile, ...

	const double PI = 3.14159;		// =double const
	//PI = 2.14159;

	const int arr[5] = { 1,2,3,4,5 };
	// arr[1] = 123;

	const double arr2[4] = { 1.0,2.0,3.0,4.0 };
	// arr2[0] = 100.0;

	const double* pd = arr2;
	//*pd = 3.0;			// pd[0] = 3.0; arr2[0] = 3.0;	셋 다 같은 기능
	//pd[2] = 1024.0;		// arr2[2] = 1024.0;	둘 다 같은 기능

	printf("%f %f ", pd[2], arr2[2]);

	pd++;	// allowed

	printf("%f %f ", pd[2], arr2[2]);	// 4.0 3.0

	return 0;
}