//A program that displays triangles with asterisks pointing in different ways  - Last Edited 21/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	int a = 10; //initializing largest amount asterisks we want
	int b = 0; //initializing smallest amount asterisks we want

	//for loop for counting how many asteriks we want to print for the first triangle
	for (int c1 = 1; c1 <= a; c1++) {
		//for loop for displaying the required amount of asterisks for this iteration
		for (int c2 = 1; c2 <= c1; c2++) {
			printf("%s", "*"); //display asterisk
		} //end for

		printf("\n"); //position cursor at beginning newline
	} //end for

	//for loop for counting how many asteriks we want to print for the second triangle
	for (int c1 = 10; c1 > b; c1--) {
		//for loop for displaying the required amount of asterisks for this iteration
		for (int c2 = 1; c2 <= c1; c2++) {
			printf("%s", "*"); //display asterisk
		} //end for
		
		printf("\n");
	} //end for

	//for loop for counting how many asteriks and spaces we want to print for the third triangle
	for (int c1 = 10; c1 > b; c1--) {
		//for loop for displaying the required amount of spaces for this iteration
		for (int c2 = 10; c2 > c1; c2--) {
			printf("%s", " "); //display white space
		} //end for

		//for loop for displaying the required amount of asterisks for this iteration
		for (int c3 = 1; c3 <= c1; c3++) {
			printf("%s", "*"); //display asterisk
		} //end for
		
		printf("\n");
	} //end for

	//for loop for counting how many asteriks and spaces we want to print for the third triangle
	for (int c1 = 1; c1 <= a; c1++) {
		//for loop for displaying the required amount of spaces for this iteration
		for (int c2 = 10; c2 > c1; c2--) {
			printf("%s", " ");
		}

		//for loop for displaying the required amount of asterisks for this iteration
		for (int c2 = 1; c2 <= c1; c2++) {
			printf("%s", "*");
		}

		printf("\n");
	}
}