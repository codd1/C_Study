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

		// �Է� ���� ���� 0���� �۰ų� 100���� ũ�ٸ� ����
		if (num < 0.0f || num > 100.0f) continue;

		max = (max > num) ? max : num;
		min = (min < num) ? min : num;
		sum += num;

		
		
		count++;
	}

	printf("min = %f. max = %f. ave = %f\n", min, max, sum / count);

	return 0;
}