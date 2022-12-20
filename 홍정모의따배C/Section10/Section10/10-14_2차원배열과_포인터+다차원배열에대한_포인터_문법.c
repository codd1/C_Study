#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// �ٽ� �����ϱ�!

int main() {
	float arr2d[2][4] = { {1.0f,2.0f,3.0f,4.0f}, {5.0f,6.0f,7.0f,8.0f} };

	float(*pa)[4];	// 4���� float(float�� ���� 4��)�� ���� �迭�� ���� �������̴�.
	float* ap[2];	// 2���� float(float�� ���� 2��)�� ���� �������� �迭�̴�.

	printf("%zu\n", sizeof(pa));	// 8 in x64
	printf("%zu\n", sizeof(ap));	// 16 in x64
	printf("\n");

	pa = arr2d;		// ù ��° �ּҸ� �����ϴ� ���� ����
	// �����Ͱ� �ϳ��̱� ������ �迭ó�� �� �� ����.
	//pa[0] = arr2d[0];	// error
	//pa[1] = arr2d[1];	// error

	// ap = arr2d;	// error �������� �迭�� �Ұ���
	ap[0] = arr2d[0];
	ap[1] = arr2d[1];


	// 1��, 2�� �κ��� �����ϰ� �������� ����� ����.
	printf("%u %u\n", (unsigned)pa, (unsigned)(pa + 1));	// 1��
	printf("%u %u\n", (unsigned)arr2d[0], (unsigned)arr2d[1]);
	printf("%u %u\n", (unsigned)pa[0], (unsigned)(pa[0]+1));
	printf("%f\n", pa[0][0]);
	printf("%f\n", *pa[0]);
	printf("%f\n", **pa);
	printf("%f\n", pa[1][3]);
	printf("%f\n", *(*(pa + 1) + 3));
	printf("\n");

	// �����͸� ��� �ּҰ� ���ܳ�.
	printf("%u %u\n", (unsigned)ap, (unsigned)(ap + 1));	// 2��
	printf("%u %u\n", (unsigned)arr2d[0], (unsigned)arr2d[1]);
	printf("%u %u\n", (unsigned)ap[0], (unsigned)(ap[0] + 1));
	printf("%f\n", ap[0][0]);
	printf("%f\n", *ap[0]);
	printf("%f\n", **ap);
	printf("%f\n", ap[1][3]);
	printf("%f\n", *(*(ap + 1) + 3));
	printf("\n");
}