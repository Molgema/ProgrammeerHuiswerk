//A program that that seperates the digits of a number between 1 and 32767 - Last Edited 4//10/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

static int minNumber = 1; 
static int maxNumber = 32767; 

int readInteger(void);
void seperatesInteger(int Input);

int readInteger(void) {
	int userInput;
	int flag = 0; 
	
	while (flag != 1) {
		printf("Enter an integer between 1 and 32767 (Press Ctrl + C to stop the program): ");
		scanf_s("%d", &userInput);

		if (userInput >= 1 && userInput <= 32767) {
			flag = 1; 
		}
		else {
			flag = 0; 

			printf("You have not entered a correct integer. Enter an integer with a value between 1 and 32767.\n");
		}
	}

	return userInput; 
}

void seperatesInteger(int Input) {
	if (0 == Input) {
		return;
	}

	seperatesInteger(Input / 10);
	
	printf("%d ", Input % 10);	
}


int main(void) {
	int inputInteger; 

	while (true) {
		inputInteger = readInteger();
		seperatesInteger(inputInteger); 
		printf("\n");
	}
}