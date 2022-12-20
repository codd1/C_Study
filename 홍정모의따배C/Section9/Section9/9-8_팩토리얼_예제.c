#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long loop_factorial(int n);		// for���� �̿��� ���丮��
long recursive_factorial(int n);	// ���ȣ���� �̿��� ���丮��

int main() {
	int num = 5;

	printf("%d\n", loop_factorial(num));
	printf("%d\n", recursive_factorial(num));

	return 0;
}

long loop_factorial(int n) {

	int result = n;
	for (; n > 1; n--) {
		result = result * (n - 1);
	}
	return result;
}

long recursive_factorial(int n) {

	if (n > 0) {
		return n * recursive_factorial(n - 1);
	}
	
}