//GetSumOfFraction.c
/***
Question : 1 - 2/3! + 3/5! - ... + 9/17! - 10/19! = ?
Input : null
Output : 
***/
#include<stdio.h>
#define MAX 10

int main(int argc, char* argv[]) {
	float sum = 0.0;
	int numerator = 1;
	int denominator = 1;
	float fractionNumber;
	int remainder;
	int factorial;
	int number;

	//1. When the number is less than MAX, do the looping.
	for (numerator = 1 ; numerator <= MAX ; numerator++) {
		//1.3. Get the denominator number of factorial.
		factorial = denominator;
		number = denominator - 1;
		while (number >= 1) {
			factorial *= number;
			number--;
		}
		//1.4. Get the fraction number.
		fractionNumber = (float)numerator / (float)factorial;
		//1.5. Get the remainder
		remainder = numerator % 2;
		if (remainder == 0) {
			//1.5.1. When it is a even number, substract sum to fraction.
			sum -= fractionNumber;
		}
		else {
			//1.5.1. When it is a odd number, add sum to fraction.
			sum += fractionNumber;
		}
		//1.1. Count the denominator.
		denominator += 2;
		//1.2. Count the numerator.
	}
	//2. Print the sum of fraction.
	printf("Total sum of fraction is %.4f\n", sum);

	//3. Finish.
	return 0;
}