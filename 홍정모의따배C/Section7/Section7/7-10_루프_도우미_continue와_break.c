#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// continue
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		printf("%d ", i);
	}

	return 0;
}