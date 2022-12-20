#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_INT 12345
#define NUM_DOUBLE 123.456

int main() {

	printf("%c\n", 'A');
	printf("%s", "I love you\n");
	
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try.\n\n");


	printf("%9d\n", NUM_INT);	//출력할 때 최소 9자리를 써라 (남는 곳은 빈칸)
	printf("%09d\n", NUM_INT);	//남는 곳은 0으로 채움
	printf("%.2f\n", NUM_DOUBLE);	//소수점 이하 자리를 2자리로 자름

}