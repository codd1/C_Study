#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f
#define AI_NAME "ȫä��"

int main() {

	float radius, area, circum;

	printf("Hi, I'm %s\n", AI_NAME);
	printf("Input radius\n");
	scanf("%f", &radius);

	area = PI * radius * radius;	//���� ���� ���ϱ�
	circum = 2.0f * PI * radius;	//���� �ѷ� ���ϱ� +�����Ϸ� �������δ� circum=2.0*3.141592f*radius;

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);

	return 0;
}