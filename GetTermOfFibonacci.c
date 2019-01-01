//GetTermOfFivonacci.c
/***
Question : 1, 1, 2, 3, 5, 8, 13, 21, ...
Input : number of term
Output : term of value
***/
#include<stdio.h>

int main() {
	int numberOfTerm;
	int term = 3;
	long int nextNumber;
	long int firstNumber = 1;
	long int secondNumber = 1;

	printf("Which term of value do you want to know? ");
	scanf("%d", &numberOfTerm);

	//1. When the term is less than 50, do the looping.
	while (term <= numberOfTerm) {
		nextNumber = firstNumber + secondNumber;
		firstNumber = secondNumber;
		secondNumber = nextNumber;
		term += 1;
	}
	printf("Term %d is %ld\n", term - 1, nextNumber);
}