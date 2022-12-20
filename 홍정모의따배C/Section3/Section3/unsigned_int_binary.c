//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	unsigned int i = 0;

	//sizeof(unsigned int);	//마우스를 올려놨을 때 4Ui라고 나오는데
	//sizeof(i);				//크기 4바이트의 unsigned int라는 것이다.

	//printf("%u\n", sizeof(unsigned int));		//자료형이 unsigned int이므로
	//printf("%u", sizeof(i));				//알맞게 %u를 써야한다.


	//unsigned int의 최댓값을 알아보자. (양수이므로 최댓값을 알아보면된다.)
	//unsigned int(4바이트=8비트x4=32비트)
	i = 0b11111111111111111111111111111111;	//0b는 이진수라는걸 알려줌

	printf("%u", i);

}