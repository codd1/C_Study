#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문제 3: 원하는 첫 알파벳과 마지막 알파벳을 입력받고, 줄바꿈이 될 때마다 맨 앞 알파벳이 하나씩 사라짐.
// 첫 알파벳 ~ 마지막 알파벳 출력\n 첫 알파벳+1 ~ 마지막 알파벳 출력\n ... 마지막 알파벳 출력\n

int main() {

	char first_alpha;
	char last_alpha;

	printf("Input First, Last Alphabet : ");
	scanf("%c %c", &first_alpha, &last_alpha);

	for (int count = 0; count < last_alpha - first_alpha + 1; count++) {
		for (int alpha = first_alpha + count; alpha <= last_alpha; alpha++) {
			printf("%c ", alpha);
		}
		printf("\n");
	}
	
	return 0;
}