#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	const int power_of_twos[] = { 1,2,4,8,16,32,64 };
	printf("%d\n", sizeof(power_of_twos));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(power_of_twos[0]));

	for (int i = 0; i < sizeof(power_of_twos) / sizeof(power_of_twos[0]); i++) {
		printf("%d ", power_of_twos[i]);
	}

}