#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef unsigned long int ULong;

int main(int argc, char* argv[]);
void Input(ULong *firstNumber, ULong *secondNumber);
void GetPrimeNumbers(ULong firstNumber, ULong secondNumber, ULong *(*primeNumbers), ULong *count);
void Output(ULong(*primeNumbers), ULong *count);

int main(int argc, char* argv[]) {
	ULong firstNumber, secondNumber;
	ULong(*primeNumbers);
	ULong count;

	Input(&firstNumber, &secondNumber);

	//primeNumbers = (ULong(*))calloc(30, sizeof(ULong));
	[]
	GetPrimeNumbers(firstNumber, secondNumber, &primeNumbers, &count);
	Output(primeNumbers, count);

	if (primeNumbers != NULL) {
		free(primeNumbers);
	}

	return 0;
}

void Input(ULong *firstNumber, ULong *secondNumber) {

	scanf("%d %d", firstNumber, secondNumber);
}

void GetPrimeNumbers(ULong firstNumber, ULong secondNumber, ULong*(*primeNumbers), ULong *count) {
	ULong number, factor, remainder, i = 0;
	*count = 0;

	//입력받은 수 만큼 힙에 배열 할당
	//*primeNumbers = (ULong(*))calloc(secondNumber-firstNumber+1, sizeof(ULong));

	number = firstNumber;
	while (number <= secondNumber) {
		factor = 2;
		remainder = number;
		while (remainder >= factor) {
			remainder -= factor;
		}
		while (factor < number && remainder != 0) {
			factor++;
			remainder = number;
			while (remainder >= factor) {
				remainder -= factor;
			}
		}
		if (number == factor) {
			//(*primeNumbers)[i] = number;
			//i++;
			(*count)++;
		}
		number++;
	}

	if (*count > 0) {
		*primeNumbers = (ULong(*))calloc(*count, sizeof(ULong));
	}

	number = firstNumber;
	while (number <= secondNumber && *count>0) {
		factor = 2;
		remainder = number;
		while (remainder >= factor) {
			remainder -= factor;
		}
		while (factor < number && remainder != 0) {
			factor++;
			remainder = number;
			while (remainder >= factor) {
				remainder -= factor;
			}
		}
		if (number == factor) {
			(*primeNumbers)[i] = number;
			i++;
			//(*count)++;
		}
		number++;
	}
}

void Output(ULong(*primeNumbers), ULong *count) {
	ULong i = 0;

	//printf("%d", count+1);
	while (i < count) {
		printf("%d ", primeNumbers[i]);
		i++;
	}
}