//A program that determines the largest of ten given inputs by the user  - Last Edited 19/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	unsigned int number, largest = 0; //initializing number given by user to 0 and initializing largest number to 0 
	int counter = 1; //initializing counter to the first number from 1 to 10 

	//determining largest number from 10 inputs made by user
	while (counter <= 10) {
		printf("Enter the amount of sales made by the salesperson: \n"); //prompting user to enter the sales 
		scanf_s("%d", &number); //reading the amount of sales into the variable number

		//checking if number is bigger than largest and then assigning largest to number if true
		if (number > largest) {
			largest = number;
		} //end if

		counter++; 
	} //end while
	
	printf("The largest number of sales is %d", largest); //displaying largest number of sales to user
} //end main