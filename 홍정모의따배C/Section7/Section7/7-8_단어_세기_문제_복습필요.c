#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
	
	int characters = 0;
	int words = 0;
	int lines = 0;

	bool line_flag = false;
	bool word_flag = false;
	
	printf("Enter text : \n");
	
	char ch;
	//while ((ch = getchar()) != '.') {
	//	
	//	if (ch == ' ') {
	//		words++;
	//	}
	//	else if (ch != ' ' && ch == '\n') {
	//		lines++;
	//	}
	//	else {
	//		characters++;
	//	}
	//}

	while ((ch = getchar()) != '.') {

		if (!isspace(ch)) {
			characters++;
		}
		if (!isspace(ch) && !line_flag) {
			lines++;
			line_flag = true;
		}
		if (ch == '\n') {
			line_flag = false;
		}
		if (!isspace(ch) && !word_flag) {
			words++;
			word_flag = true;
		}
		if (isspace(ch)) {		// isspace(..) �Լ����� /n /t � ���Եȴ�. (��, �ٹٲ��� �Ͼ�� true�� �ȴ�.)
			word_flag = false;
		}

	}

	printf("Characters = %d. Words = %d. Lines = %d\n", characters, words, lines);

	return 0;
}