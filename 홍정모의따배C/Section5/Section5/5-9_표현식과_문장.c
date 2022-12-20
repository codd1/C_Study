#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, apples;	// declaration statement 선언 문장
	apples = 3;			// assignment statement 대입 문장
	;					// null statement
	7;
	1 + 2;
	x = 4;
	x = 1 + (y = 5);	// y = 5 is subexpresion (부분표현식) 일부 기능만 수행

	while (x++ < 10)	// while statement (structured statement)
		y = x + y;

	printf("%d\n", y);	// function statement 함수 호출문

	return 0;			// return statement
}