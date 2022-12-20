#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

// 소수인지 판단하는 예제

int main() {
	unsigned num;
	bool isPrime = 0;	// flag
	
	scanf("%u", &num);

	isPrime = true;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			isPrime = false;
			printf("%u is divisible by %u.\n", num, i);		// 약수 찾기
		}
	}

	if (isPrime) {
		printf("%u is a prime number.\n", num);
	}
	else {
		printf("%u is not a prime number.\n", num);
	}
}