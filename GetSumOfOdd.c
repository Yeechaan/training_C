//GetSumOfOdd.c
/**
Question : #2072
Input : number Of test case, 10 numbers
Output : number of test case with sum of odd numbers
**/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int testCase;
	int *sumOfCases;
	int numbers;
	int sumOdd;
	int remainder;
	int i = 0, j;

	scanf("%d", &testCase);
	sumOfCases = (int*)calloc(testCase, sizeof(int));

	while (i < testCase) {
		sumOdd = 0;
		for (j = 0; j < 10; j++) {
			scanf("%d", &numbers);
			remainder = numbers % 2;
			if (remainder == 1) {
				sumOdd += numbers;
			}
		}
		sumOfCases[i] = sumOdd;
		i++;
	}
	
	i = 0;
	while (i < testCase) {
		printf("#%d %d\n", i+1, sumOfCases[i]);
		i++;
	}

	if (sumOfCases != NULL) {
		free(sumOfCases);
	}

	return 0;
}