#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 십진수를 이진수로 변환하는 문제

void print_binary(unsigned long n);		// 재귀함수 이용
void print_binary_loop(unsigned long n);	// 반복문 이용

int main() {
	unsigned long num = 13;		// 십진수를 여기에 입력

	print_binary_loop(num);
	printf("\n");
	print_binary(num);
	printf("\n");

	return 0;
}
void print_binary(unsigned long n) {

	unsigned long str[10];
	unsigned long divide_num = n;
	int count = 0;

	for (; divide_num > 0; count++) {
		n = divide_num % 2;
		divide_num = divide_num / 2;
		str[count] = n;
	}
	
	// 배열을 뒤에서부터 출력
	for (; count != 0; count--) {
		printf("%ul", str[count-1]);
	}
	printf("\n");
}

void print_binary_loop(unsigned long n) {

	unsigned long divide_num = n;
	if (n > 1) {
		n = divide_num % 2;
		divide_num = divide_num / 2;

		print_binary_loop(divide_num);
	}
	// 재귀함수에서 되돌아나오면서 거꾸로 출력
	printf("%ul", n);
}