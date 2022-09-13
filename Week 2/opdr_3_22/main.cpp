//A program that determines whether the integer given by the user is a prime number or not  - Last Edited 13/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	int input; //interger input user

	printf("Enter an integer greater than 1: \n"); //prompt user to enter integer
	scanf_s("%d", &input); //read integer input from user

	//determining if integer is a prime number
	if (input % input == 0) {
		if (input % 1 == 0) {
			printf("%d is a prime number\n", input);
		}
	} //end if 
	else if (input < 1) {
		printf("%d is not a prime number\n", input);
	}
	else {
		printf("%d is not a prime number\n", input); 
	}
} //end main