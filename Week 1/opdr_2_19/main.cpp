//A program to determine sum, average, product, smallest number and largest number from three interget input - Last Edited 12/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	//prompt user for three integers
	printf("Enter three different integers: \n");

	int a, b, c; //declaring three different integers that the user inputs 
	scanf_s("%d\n%d\n%d", &a, &b, &c); //read three integer inputs from user

	int sum = a + b + c; //declare variable sum and calculate result 
	int average = (a + b + c) / 3; //declare variable average and calculate result
	int product = a * b * c; //declare variable product and calculate result 
	int smallest, largest; //declaring variables for smallest and biggest integer

	//determining smallest integer
	if (a <= b) {
		if (a <= c) {
			smallest = a; 
		} //end if
	} //end if 
	if (b <= a) {
		if (b <= c) {
			smallest = b;
		}
	} //end if
	if (c <= a) {
		if (c <= b) {
			smallest = c;
		}
	} //end if

	//determining largest integer
	if (a >= b) {
		if (a >= c) {
			largest = a;
		} //end if
	} //end if 
	if (b >= a) {
		if (b >= c) {
			largest = b;
		}
	} //end if
	if (c >= a) {
		if (c >= b) {
			largest = c;
		}
	} //end if

	//displaying all determined variables to user
	printf("Sum is %d \nAverage is %d \nProduct is %d \nSmallest is %d \nLargest is %d \n", sum, average, product, smallest, largest);
} //end main