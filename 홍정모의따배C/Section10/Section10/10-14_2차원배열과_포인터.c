#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float arr2d[2][4] = { {1.0f,2.0f,3.0f,4.0f}, {5.0f,6.0f,7.0f,8.0f} };
	
	printf("%u\n", (unsigned)arr2d);
	printf("%u\n", (unsigned)arr2d[0]);	// 배열에서는 배열이 주소 그 자체이므로 이 주소가 담겨있는 다른 메모리 공간을 찾는게 아니라 이 변수의 주소를 알려줄뿐이다. 따라서 &arr2d[0]를 써도 같은 값이 나온다.
	printf("\n");

	// arr2d points to arr2d[0] (not arr2d[0][0]), arr2d[0][0]은 값이고 arr2d[0]은 주소이다.

	printf("%u\n", (unsigned)*arr2d);
	printf("%u\n", (unsigned)&arr2d[0]);
	printf("%u\n", (unsigned)&arr2d[0][0]);
	printf("%f %f %f\n", arr2d[0][0], **arr2d, *arr2d[0]);	// 값 출력
	printf("\n");

	//줄바꿈까지 다 동일한 값(4byte * 4 = 16byte)
	printf("%u\n", (unsigned)(arr2d + 1));
	printf("%u\n", (unsigned)(&arr2d[1]));
	printf("%u\n", (unsigned)(arr2d[1]));
	printf("%u\n", (unsigned)(*(arr2d + 1)));
	printf("%u\n", (unsigned)(&arr2d[0] + 1));
	printf("%u\n", (unsigned)(&arr2d[1][0]));
	printf("\n");
	
	printf("%f\n", *(*(arr2d + 1) + 2));	// 값 출력 arr2d[1][2]
	printf("\n");

	for (int j = 0; j < 2; j++) {
		printf("[%d] = %u, %u\n", j, (unsigned)(arr2d[j]), (unsigned)*(arr2d + j));	   // 16바이트씩 건너뛴다.
		for (int i = 0; i < 4; i++) {
			printf("[%d][%d] = %f, %f\n", j, i, arr2d[j][i], *(*(arr2d + j) + i));
			*(*(arr2d + j) + i) += 1.0f;	// arr2d[j][i] += 1.0f;
		}
	}
}