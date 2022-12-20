#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int count = 0;

	printf("반복문에서의 count++\n");
	while (count < 10) {

		printf("%d ", count++);		//print first, plus second
	}

	printf("\n\n반복문에서의 ++count\n");
	count = 0; 
	while (count < 10) {

		printf("%d ", ++count);
	}



	printf("\n\n대입할 때의 증가연산자\n");
	int i = 1, j = 1;
	int i_later, j_first;

	i_later = i++;		// i 값을 넣어주고, 나중에 1 증가
	j_first = ++j;		// 1 증가하고 증가된 j 값을 넣어줌.

	printf("%d %d\n", i, j);
	printf("%d %d\n", i_later, j_first);



	printf("\n연산자의 우선순위? 증감연산자 > 곱셈\n");
	int k = 3;
	int l = 2 * --k;			// 1 감소한 값으로 계산. 2*2
	printf("%d %d\n", k, l);

	k = 1;
	l = 2 * k--;				// 계산 후 1 감소. 2*1
	printf("%d %d\n", k, l);



	printf("\n증감연산자는 수정가능한 L value에서만 사용가능하다.\n");
	int x = 1, y = 1, z;
	z = x * y++;		// (x) * (y++), not (x*y)++
	printf("%d %d %d\n", x,y,z);
	//z = (x * y)++;	// error.
	// 위에가 오류인 이유 x, y는 메모리가 있지만 x*y의 메모리는 없기 때문이다. x*y의 값이 어디에 들어갈건데?
	//z = 3++;		//error. 상수에 사용 불가

}