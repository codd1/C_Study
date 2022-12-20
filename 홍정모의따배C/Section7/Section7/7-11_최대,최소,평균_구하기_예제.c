#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main() {
	
	float num;
	float sum = 0.0f;
	int count = 0;
	float max = -FLT_MAX;
	float min = FLT_MAX;

	while (scanf("%f", &num) == 1) {

		// 입력 받은 값이 0보다 작거나 100보다 크다면 무시
		if (num < 0.0f || num > 100.0f) continue;

		max = (max > num) ? max : num;
		min = (min < num) ? min : num;
		sum += num;

		
		
		count++;
	}

	printf("min = %f. max = %f. ave = %f\n", min, max, sum / count);

	return 0;
}