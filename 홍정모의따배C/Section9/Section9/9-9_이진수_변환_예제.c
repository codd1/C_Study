#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �������� �������� ��ȯ�ϴ� ����

void print_binary(unsigned long n);		// ����Լ� �̿�
void print_binary_loop(unsigned long n);	// �ݺ��� �̿�

int main() {
	unsigned long num = 13;		// �������� ���⿡ �Է�

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
	
	// �迭�� �ڿ������� ���
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
	// ����Լ����� �ǵ��Ƴ����鼭 �Ųٷ� ���
	printf("%ul", n);
}