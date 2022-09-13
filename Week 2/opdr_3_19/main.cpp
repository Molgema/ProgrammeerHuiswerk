//A program that keeps calculating the interest charge until the user enters -1  - Last Edited 12/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	float principal = 0; //initializing loan principal in dollars
	float rate = 0; //initializing interest rate in percentage
	int days = 0; //initializing term of loan in days

	//keeps calculating interest charge while the loan principal entered isn't -1
	while (principal != -1) {
		printf("Enter loan principal (-1 to end): "); //prompt user to enter loan principal 
		scanf_s("%f", &principal); //reading input of loan principal 
		
		if (principal != -1) {
			printf("Enter interest rate: "); //prompt user to enter interest rate
			scanf_s("%f", &rate); //reading input of interest rate

			printf("Enter term of the loan in days: "); //prompt user to enter term of the loan
			scanf_s("%d", &days); //reading input of term of the loan

			float interest = principal * rate * days / 365;  //declaring the formula for interest charge

			printf("The interest charge is $%.2f\n", interest); //displaying the result to the user
		} //end if 
	} //end while
}