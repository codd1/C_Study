#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int count = 0;

	printf("�ݺ��������� count++\n");
	while (count < 10) {

		printf("%d ", count++);		//print first, plus second
	}

	printf("\n\n�ݺ��������� ++count\n");
	count = 0; 
	while (count < 10) {

		printf("%d ", ++count);
	}



	printf("\n\n������ ���� ����������\n");
	int i = 1, j = 1;
	int i_later, j_first;

	i_later = i++;		// i ���� �־��ְ�, ���߿� 1 ����
	j_first = ++j;		// 1 �����ϰ� ������ j ���� �־���.

	printf("%d %d\n", i, j);
	printf("%d %d\n", i_later, j_first);



	printf("\n�������� �켱����? ���������� > ����\n");
	int k = 3;
	int l = 2 * --k;			// 1 ������ ������ ���. 2*2
	printf("%d %d\n", k, l);

	k = 1;
	l = 2 * k--;				// ��� �� 1 ����. 2*1
	printf("%d %d\n", k, l);



	printf("\n���������ڴ� ���������� L value������ ��밡���ϴ�.\n");
	int x = 1, y = 1, z;
	z = x * y++;		// (x) * (y++), not (x*y)++
	printf("%d %d %d\n", x,y,z);
	//z = (x * y)++;	// error.
	// ������ ������ ���� x, y�� �޸𸮰� ������ x*y�� �޸𸮴� ���� �����̴�. x*y�� ���� ��� ���ǵ�?
	//z = 3++;		//error. ����� ��� �Ұ�

}