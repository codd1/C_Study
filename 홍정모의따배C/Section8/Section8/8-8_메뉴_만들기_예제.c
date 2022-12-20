#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Á¤´ä!!!

int main() {

	char c;
	int count;

	printf("Enter the letter of your choice: \n");
	printf("a. avengers\tb. beep\nc. count\tq. quit\n");

	while (1) {
		
		switch ((c = getchar())) {
		case 'a':
			printf("Avengers assemble!\n");
			continue;
		case 'b':
			printf("\a");
			continue;
		case 'c':
			printf("Enter an integer: \n");
			scanf("%d", &count);
			for (int i = 1; i<=count; i++) {
				printf("%d\n", i);
			}
			continue;
		}
		if (c == 'q') {
			break;
		}
		else {
			printf("Enter the letter of your choice: \n");
			printf("a. avengers\tb. beep\nc. count\tq. quit\n");
		}
	}

	return 0;
}