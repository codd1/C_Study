#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// [정수] [지수] 를 입력했을 때 정수의 지수제곱을 계산하는 문제

int compute_power(int base, int exp) {
	int result = 1;
	for (int i = 0; i < exp; i++) {
		result *= base;
	}

	return result;
}

int main() {

	int base, exp, result;
	while (scanf("%d %d", &base, &exp) == 2) {
		
		result = compute_power(base, exp);

		printf("Result = %d\n", result);
	}
}