//A program that reads in two integers and determines if the first integer  is a multiple of the second integer - Last Edited 12/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	printf("Enter two integers: \n");

	int a, b; //declaring variables for integers inputted by user

	scanf_s("%d %d", &a, &b); //reading input of two integers

	//determining if a is a multiple of b
	if (a % b == 0) {
		printf("%d is a multiple of %d.\n", a, b);
	}//end if 

	//determining if a is not a multiple of b
	if (a % b != 0) {
		printf("%d is not a multiple of %d.\n", a, b);
	}
}//end main

