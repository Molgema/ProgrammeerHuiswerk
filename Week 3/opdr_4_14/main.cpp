//A program that displays the table of factorials from the numbers 1 to 20  - Last Edited 21/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	double largest = 20; //initializing the largest factorial we want to calculate
	double factorial = 1; //initializing the first factorial we want to use

	printf("Number\tFactorial\n"); //displaying heading of table of values
	
	//calculating the result of each factorial from the numbers 1 to 20
	for (int counter = 1; counter <= largest; counter++) {
		factorial *= counter; //calculating the factorial for this iteration 

		printf("%d\t%.0f\n", counter, factorial); //displaying the number and calculated factorial for this iteration
	} //end for
} //end main