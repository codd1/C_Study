#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_INT 12345
#define NUM_DOUBLE 123.456

int main() {

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try.\n\n");


	printf("%9d\n", NUM_INT);	//����� �� �ּ� 9�ڸ��� ��� (���� ���� ��ĭ)
	printf("%09d\n", NUM_INT);	//���� ���� 0���� ä��
	printf("%.2f\n", NUM_DOUBLE);	//�Ҽ��� ���� �ڸ��� 2�ڸ��� �ڸ�

}