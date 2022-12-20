#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		// exit()

int main() {
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";

	file = fopen(file_name, "r");
	if (file == NULL) {
		printf("Failed to open file.\n");
		exit(1);		// 프로그램 자체를 강제 종료 (괄호 안의 숫자는 강제 종료 후 코드 번호로 나옴. exited with code 1.)
	}

	while ((c = getc(file)) != EOF) {
		putchar(c);
	}
	fclose(file);

	return 0;
}