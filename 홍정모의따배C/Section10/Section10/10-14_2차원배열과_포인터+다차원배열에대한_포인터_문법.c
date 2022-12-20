#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 다시 이해하기!

int main() {
	float arr2d[2][4] = { {1.0f,2.0f,3.0f,4.0f}, {5.0f,6.0f,7.0f,8.0f} };

	float(*pa)[4];	// 4개의 float(float인 원소 4개)를 가진 배열에 대한 포인터이다.
	float* ap[2];	// 2개의 float(float인 원소 2개)를 가진 포인터의 배열이다.

	printf("%zu\n", sizeof(pa));	// 8 in x64
	printf("%zu\n", sizeof(ap));	// 16 in x64
	printf("\n");

	pa = arr2d;		// 첫 번째 주소를 대입하는 것은 가능
	// 포인터가 하나이기 때문에 배열처럼 쓸 수 없다.
	//pa[0] = arr2d[0];	// error
	//pa[1] = arr2d[1];	// error

	// ap = arr2d;	// error 포인터의 배열은 불가능
	ap[0] = arr2d[0];
	ap[1] = arr2d[1];


	// 1번, 2번 부분을 제외하고 나머지는 결과가 같음.
	printf("%u %u\n", (unsigned)pa, (unsigned)(pa + 1));	// 1번
	printf("%u %u\n", (unsigned)arr2d[0], (unsigned)arr2d[1]);
	printf("%u %u\n", (unsigned)pa[0], (unsigned)(pa[0]+1));
	printf("%f\n", pa[0][0]);
	printf("%f\n", *pa[0]);
	printf("%f\n", **pa);
	printf("%f\n", pa[1][3]);
	printf("%f\n", *(*(pa + 1) + 3));
	printf("\n");

	// 포인터를 담는 주소가 생겨남.
	printf("%u %u\n", (unsigned)ap, (unsigned)(ap + 1));	// 2번
	printf("%u %u\n", (unsigned)arr2d[0], (unsigned)arr2d[1]);
	printf("%u %u\n", (unsigned)ap[0], (unsigned)(ap[0] + 1));
	printf("%f\n", ap[0][0]);
	printf("%f\n", *ap[0]);
	printf("%f\n", **ap);
	printf("%f\n", ap[1][3]);
	printf("%f\n", *(*(ap + 1) + 3));
	printf("\n");
}