#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, apples;	// declaration statement ���� ����
	apples = 3;			// assignment statement ���� ����
	;					// null statement
	7;
	1 + 2;
	x = 4;
	x = 1 + (y = 5);	// y = 5 is subexpresion (�κ�ǥ����) �Ϻ� ��ɸ� ����

	while (x++ < 10)	// while statement (structured statement)
		y = x + y;

	printf("%d\n", y);	// function statement �Լ� ȣ�⹮

	return 0;			// return statement
}