#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// scanf�� �ٸ� ����� �Լ��� ���� �������.

int main() {
	
	char ch;	// �ڷ����� �������.
	//ch = getchar();		// buffer�� ����� ������.
	//putchar(ch);

	while ((ch = getchar()) != '\n') {
		// f�� �ԷµǸ� *�� �ٲ۴�.
		if (ch == 'f')		// ���ڿ��� �ȵ�. ��? getchar�� �� ���ھ� �Է� �����ϱ�.
			ch = '*';

		// �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� �ٲ۴�.
		if (ch >= 'a' && ch <= 'z') {	// 'a' = 65, 'A' = 97
			ch -= 'a' - 'A';
		} else if (ch >= 'A' && ch <= 'Z') {
			ch += 'a' - 'A';
		}

		putchar(ch);		// ��? �� �ٷ� ��� �� ����? -> buffer
	}

	putchar(ch);

	return 0;
}