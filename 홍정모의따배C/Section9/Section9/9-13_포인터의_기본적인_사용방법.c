#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	a = 123;

	int *a_ptr;		// * : asterisk

	a_ptr = &a;		// & : address of operator

	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	*a_ptr = 456;	// re-direction or de-referencing, a의 주소로 가서 값을 바꿔줬기 때문에

	printf("%d %d %p\n", a, *a_ptr, a_ptr);		// a의 값도 같이 변한다. a_ptr은 a가 가진 주소이기 때문에 변하지않는다.
	// a와 *a_ptr을 출력하는 것의 차이는 변수를 통해서인지, 주소를 통해서인지의 차이이다.

	b = *a_ptr;
	printf("%d\n", b);	// 456

	*a_ptr = 789;

	printf("%d\n", b);	// 456. 변수에 값만 저장해줬기 때문에 포인터와 연관없음.
	printf("%d %d %p %p\n", a, *a_ptr, a_ptr, b);	// 789. 확인해보면 a_ptr과 b는 다른 메모리 주소를 가짐.

	a = 1004;
	printf("%d %d %p\n", a, *a_ptr, a_ptr);		// 1004. 포인터가 re-direction해서 가져온 값도 바뀐다.

}