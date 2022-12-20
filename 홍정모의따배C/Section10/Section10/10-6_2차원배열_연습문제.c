#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main() {
	double year2016[MONTHS] = { -3.2,0.2,7.0,14.1,19.6,23.6,26.2,28.0,23.1,16.1,6.8,1.2 };
	double year2017[MONTHS] = { -1.8,-0.2,6.3,13.9,19.5,23.3,26.9,25.9,22.1,16.4,5.6,-1.9 };
	double year2018[MONTHS] = { -4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6 };

	double arr[3][12] = { { -3.2,0.2,7.0,14.1,19.6,23.6,26.2,28.0,23.1,16.1,6.8,1.2 }, { -1.8,-0.2,6.3,13.9,19.5,23.3,26.9,25.9,22.1,16.4,5.6,-1.9 }, { -4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6 } };
	

	// 배열 전체 출력
	printf("[Temperature Data]\n");
	printf("Year index :\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
	
	for (int i = 0; i < YEARS; i++) {
		printf("Year %d\t:\t", i);
		for (int j = 0; j < MONTHS; j++) {
			printf("%.1f\t", arr[i][j]);
		}
		printf("\n");
	}


	// 연도별 기온 평균 출력
	double sum = 0;
	printf("\n[Yearly average temperatures of %d years]\n", YEARS);

	for (int i = 0; i < YEARS; i++) {
		for (int j = 0; j < MONTHS; j++) {
			sum += arr[i][j];
		}
		printf("Year %d : average temperature = %.1f\n", i, sum/MONTHS);
		sum = 0;
	}


	// 달별 기온 평균 출력
	printf("\n[Monthly average temperatures for %d years]\n", YEARS);
	printf("Year index:\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
	printf("Avg temps :\t");
	for (int i = 0; i < MONTHS; i++) {
		for (int j = 0; j < YEARS; j++) {
			sum += arr[j][i];
		}
		printf("%.1f\t", sum / YEARS);
		sum = 0;
	}

}