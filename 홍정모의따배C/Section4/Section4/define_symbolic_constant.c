#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f
#define AI_NAME "홍채영"

int main() {

	float radius, area, circum;

	printf("Hi, I'm %s\n", AI_NAME);
	printf("Input radius\n");
	scanf("%f", &radius);

	area = PI * radius * radius;	//원의 넓이 구하기
	circum = 2.0f * PI * radius;	//원의 둘레 구하기 +컴파일러 입장으로는 circum=2.0*3.141592f*radius;

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	return 0;
}