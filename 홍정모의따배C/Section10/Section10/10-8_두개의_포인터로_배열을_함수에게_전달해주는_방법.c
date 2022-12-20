#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double*, double*);

int main() {
	double arr1[5] = { 10,13,12,7,8 };
	printf("Avg = %f\n", average(arr1, arr1 + 5));	// 원소 갯수만큼 더해줌
	
	return 0;
}

// 포인터와 갯수를 넘겨주는 방식이 아닌 포인터 2개를 넘겨주는 방식
double average(double* start, double* end) {
	int count = end - start;
	double avg = 0.0;
	while (start < end) {
		avg += *start++;
		//count++;
	}
	avg /= (double)count;

	return avg;
}