//A program that determines the average of all given values by the users  - Last Edited 21/9/22
//Niels Boer
//s1183510
//E1A


#include <stdio.h>

int main(void) {

	unsigned int amount; //declaring variable for amount of values entered by user
	unsigned int value; //declaring 

	float sum = 0; //initializing the sum to be 0 

	printf("Enter the amount of values you want to sum: \n"); //prompting user to enter how many values they want to sum
	scanf_s("%d", &amount); //reading amount of values

	//adding each value to the variable sum to get the sum of all values
	for (int counter = 1; counter <= amount; counter++) {
		scanf_s("%d", &value); //reading input value from user
		sum += value; //adding value to the variable sum
	} //end for

	//checking if user doesn't enter 0 to prevent crashing the program
	if (amount == 0) {
		printf("0 is not an acceptable amount."); //displaying error message
	} //end if 
	else {
		printf("The average of the sum of all the values is %.3f\n", sum / amount); //calculating and displaying the average of all the values 
	} //end else
}// end main