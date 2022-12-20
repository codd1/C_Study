#include <stdio.h>

int main() {
	
	float n1 = 3.14;		// 4 bytes
	double n2 = 1.234;		// 8 bytes
	int n3 = 1024;			// 4 bytes
	
	printf("1st printf %f %f %d\n\n", n1, n2, n3);

	printf("2nd printf %d %d %d\n", n1, n2, n3);		// 4, 4, 4 (N,N,N)
	printf("3rd printf %lld %lld %d\n", n1, n2, n3);	// 8, 8, 4 (N,N,Y)
	printf("4th printf %f %d %d\n", n1, n2, n3);		// 8, 4, 4 (Y,N,N)
	printf("5th printf %f %lld %d\n", n1, n2, n3);		// 8, 8, 4 (Y,N,Y)

	return 0;
}