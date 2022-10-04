//A program that displays a number and the rounded down number  - Last Edited 4//10/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int readIntegers(void);
int isEven(int inputInteger); 

int readIntegers(void) {
	int readNumber; 

	printf("Enter an integer to check (Press Ctrl + C to stop the program): ");

	scanf_s("%d", &readNumber);

	return readNumber; 
}

int isEven(int inputInteger) {
	int result; 

	if (inputInteger % 2 == 0) {
		result = 1;
	}
	else {
		result = 0;
	}

	return result;
}

int main(void) {
	int integerCheck;
	int displayResult; 
	
	while (true) {
		integerCheck = readIntegers();
		displayResult = isEven(integerCheck);

		printf("%d\n", displayResult);
	}
}