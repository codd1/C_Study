#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// scanf와 다른 입출력 함수에 대해 배워보자.

int main() {
	
	char ch;	// 자료형은 상관없음.
	//ch = getchar();		// buffer의 개념과 연관됨.
	//putchar(ch);

	while ((ch = getchar()) != '\n') {
		// f가 입력되면 *로 바꾼다.
		if (ch == 'f')		// 문자열은 안됨. 왜? getchar는 한 글자씩 입력 받으니까.
			ch = '*';

		// 대문자는 소문자로, 소문자는 대문자로 바꾼다.
		if (ch >= 'a' && ch <= 'z') {	// 'a' = 65, 'A' = 97
			ch -= 'a' - 'A';
		} else if (ch >= 'A' && ch <= 'Z') {
			ch += 'a' - 'A';
		}

		putchar(ch);		// 어? 왜 바로 출력 안 되지? -> buffer
	}

	putchar(ch);

	return 0;
}