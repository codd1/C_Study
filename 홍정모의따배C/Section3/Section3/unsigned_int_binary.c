//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	unsigned int i = 0;

	//sizeof(unsigned int);	//���콺�� �÷����� �� 4Ui��� �����µ�
	//sizeof(i);				//ũ�� 4����Ʈ�� unsigned int��� ���̴�.

	//printf("%u\n", sizeof(unsigned int));		//�ڷ����� unsigned int�̹Ƿ�
	//printf("%u", sizeof(i));				//�˸°� %u�� ����Ѵ�.


	//unsigned int�� �ִ��� �˾ƺ���. (����̹Ƿ� �ִ��� �˾ƺ���ȴ�.)
	//unsigned int(4����Ʈ=8��Ʈx4=32��Ʈ)
	i = 0b11111111111111111111111111111111;	//0b�� ��������°� �˷���

	printf("%u", i);

}