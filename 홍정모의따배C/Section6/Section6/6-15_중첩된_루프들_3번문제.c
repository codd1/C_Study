#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� 3: ���ϴ� ù ���ĺ��� ������ ���ĺ��� �Է¹ް�, �ٹٲ��� �� ������ �� �� ���ĺ��� �ϳ��� �����.
// ù ���ĺ� ~ ������ ���ĺ� ���\n ù ���ĺ�+1 ~ ������ ���ĺ� ���\n ... ������ ���ĺ� ���\n

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