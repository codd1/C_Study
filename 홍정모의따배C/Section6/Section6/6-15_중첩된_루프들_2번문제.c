#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문제 2: 원하는 첫 알파벳와 몇 줄 출력할지 숫자를 입력받고, 첫 알파벳부터 한 글자씩 더해가면서 입력한 숫자만큼 출력
// 첫 알파벳 하나\n 첫 알파벳, 다음 알파벳\n ... 첫 알파벳, 다음 알파벳, ... 마지막 알파벳(첫 글자부터 입력한 숫자번째 알파벳)\n

int main() {

	char first_alpha;
	int count_num;

	printf("Input First Alphabet : ");
	scanf("%c", &first_alpha);

	printf("Input Count Number : ");
	scanf("%d", &count_num);


	for (int count = 0; count < count_num; count++) {
		for (int alpha = first_alpha; alpha <= first_alpha + count; alpha++) {
			printf("%c ", alpha);
		}
		printf("\n");
	}

	return 0;
}