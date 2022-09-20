//A program that determines whether the integer given by the user is a prime number or not  - Last Edited 20/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	int number, flag = 0; //initializing number for user input and flag for determining if number is prime number
	int counter = 2; //initializing counter for while loop 

	printf("Enter any number to check if it is a prime number: \n"); //ask user to enter number
	scanf_s("%d", &number); //read number into the variable number

	//checking for each number between counter and number - 1 if the remainder of dividing number by counter is 0 
	while (counter <= number - 1) {
		if (number % counter == 0) {
			flag = 1; 
		} //end if 

		counter++;
	}

	//displaying whether number is a prime number or not 
	if (flag == 0) {
		if (number >= 2) {
			printf("%d is a prime number.\n", number);
		}
		else {
			printf("%d is not a prime number.\n", number);
		} //end if
	}	
	else {
		printf("%d is not a prime number.\n", number);
	} //end if 
} //end main