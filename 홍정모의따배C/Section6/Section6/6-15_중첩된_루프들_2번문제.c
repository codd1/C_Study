#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� 2: ���ϴ� ù ���ĺ��� �� �� ������� ���ڸ� �Է¹ް�, ù ���ĺ����� �� ���ھ� ���ذ��鼭 �Է��� ���ڸ�ŭ ���
// ù ���ĺ� �ϳ�\n ù ���ĺ�, ���� ���ĺ�\n ... ù ���ĺ�, ���� ���ĺ�, ... ������ ���ĺ�(ù ���ں��� �Է��� ���ڹ�° ���ĺ�)\n

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