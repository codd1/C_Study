#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문제 1: 원하는 첫 알파벳과 마지막 알파벳을 입력받고, 첫 알파벳부터 마지막 알파벳까지 출력
// 그리고 원하는 횟수만큼 반복

int main() {
	
	char first_alpha = 0;
	char last_alpha = 0;
	int repeat_num = 0;

	printf("Input First, Last Alphabet : ");
	scanf("%c %c", &first_alpha, &last_alpha);

	printf("How Many Repeat? : ");
	scanf("%d", &repeat_num);


	for (int count = 0; count < repeat_num; count++) {
		for (char i = first_alpha; i <= last_alpha; i++) {
			printf("%c ", i);
		}
		printf("\n");
	}
	
	return 0;
}