//GetAverage.c
/**
Question : #2071
Input : number Of test case, 10 numbers
Output : number of test case with average of numbers
**/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int testCase;
	float *sumOfCases;
	int numbers;
	int sum;
	float average;
	int i = 0, j;

	scanf("%d", &testCase);
	sumOfCases = (float*)calloc(testCase, sizeof(float));

	while (i < testCase) {
		sum = 0;
		for (j = 0; j < 10; j++) {
			scanf("%d", &numbers);
			sum += numbers;
		}
		average = (float)sum / 10.0;
		sumOfCases[i] = average;
		i++;
	}

	i = 0;
	while (i < testCase) {
		printf("#%d %.0f\n", i + 1, sumOfCases[i]);
		i++;
	}

	if (sumOfCases != NULL) {
		free(sumOfCases);
	}

	return 0;
}