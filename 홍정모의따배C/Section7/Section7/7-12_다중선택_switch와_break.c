#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char c;
	while ((c = getchar()) != '.') {
		printf("You love ");

		switch (c) {		// 정수형 타입만 가능. float, double 불가능
		case 'a':
		case 'A':
			printf("apple");
			break;
		case 'b':
		case 'B':
			printf("baseball");
			break;
		case 'c':
		case 'C':
			printf("cake");
			break;
		default:
			printf("nothing");
			break;
		}

		printf(".\n");


		// 첫 번째 입력한 단어 뒤의 다른 단어들은 무시
		while (getchar() != '\n')
			continue;
	}
}