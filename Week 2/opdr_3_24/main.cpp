//A program that displays table of values for N^1 to N^4 with N from 1 to 10 - Last Edited 20/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	int counter = 1; //initializing starting number from 1 to 10

	printf("N\tN2\tN3\tN4\n"); //displaying headers of the table of values

	//calculating table of values from N to N4 and displaying the corresponding table of values
	while (counter <= 10) {
		printf("%d\t", counter);
		printf("%d\t", counter * counter);
		printf("%d\t", counter * counter * counter);
		printf("%d\n", counter * counter * counter * counter);

		counter++; 
	} //end while
} //end main