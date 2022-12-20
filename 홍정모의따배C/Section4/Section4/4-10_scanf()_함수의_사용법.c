#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>

int main() {

	//int i;
	//float f;
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);		// Note % is absent in front of str
	//printf("%d %f %s\n", i, f, str);

	//char c;
	//scanf("%c", &c);	// try blank (ºó Ä­)
	//printf("%i\n", c);	// blank is 32

	//unsigned i;
	//scanf("%u", &i);	// try negative number
	//printf("%u\n", i);

	//double d = 0.0;		// answer is float
	//scanf("%f", &d);	// lf, try real number
	//printf("%f\n", d);

	char str[30];
	scanf("%5s", str);	//width 5 , try string
	printf("%s\n", str);

	//int i;
	//scanf("%i", &i);	// try '123ab', '123a456'
	//printf("%i\n", i);

	//int a, b;
	//scanf("%d,%d", &a, &b);		// try '123,456'
	////scanf("%dA%d", &a, &b);	// try '123A456'
	//printf("%d %d", a, b);

	//int a2, b2;
	//int i2 = scanf("%d%d", &a, &b);
	//printf("%d", i);

	//int i3;
	//scanf("%*d%*d%d", &i);
	//printf("Your third input is %d\n", i);

	return 0;

}