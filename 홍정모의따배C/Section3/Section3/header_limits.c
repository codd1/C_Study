#include <stdio.h>
#include <limits.h>

int main() {
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;

	printf("max of unsigned = %u\n", u_max);
	printf("min of unsigned = %u\n", u_min);
	printf("max of signed = %u\n", i_max);
	printf("min of signed = %u\n", i_min);
}