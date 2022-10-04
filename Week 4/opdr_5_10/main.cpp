//A program that displays a number and the rounded down number  - Last Edited 4//10/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>
#include <math.h>

float readingInput(void);
float ceilNumber(float numberToRound); 

float readingInput(void) {
	float inputNumber; 

	printf("Enter a number to round down (Press Ctrl + C to stop the program): ");
	scanf_s("%f", &inputNumber); 

	return inputNumber; 
}

float ceilNumber(float numberToRound) {
	float roundedNumber; 

	roundedNumber = ceil(numberToRound + 0.5);

	return roundedNumber;
}

int main(void) {
	float readNumber;
	float roundNumber;
	
	while (true) {
		readNumber = readingInput(); 
		roundNumber = ceilNumber(readNumber); 

		printf("The number %f was rounded to %f.\n", readNumber, roundNumber);
	}
}

