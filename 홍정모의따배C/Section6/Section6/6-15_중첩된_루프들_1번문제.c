#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� 1: ���ϴ� ù ���ĺ��� ������ ���ĺ��� �Է¹ް�, ù ���ĺ����� ������ ���ĺ����� ���
// �׸��� ���ϴ� Ƚ����ŭ �ݺ�

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