//GetSumExceptMultiple.c
#include<stdio.h>
#define MAX 100

int main() {
	int sum = 0;
	int number = 1;
	int remainderThree;
	int remainderFive;

	//1. When the number is before MAX, do the loop.
	while (number <= MAX) {
		//1.2. Get remainder of 3.
		remainderThree = number % 3;
		//1.3. Get remainder of 5.
		remainderFive = number % 5;
		//1.4. if the number is not multiple 3 or 5,
		if (remainderThree != 0 && remainderFive != 0) {
			//1.4.1. Get sum of number.
			sum += number;
		}
		//1.1. Count the number.
		number++;
	}
	//2. Print the result.
	printf("Total sum is %d\n", sum);
}