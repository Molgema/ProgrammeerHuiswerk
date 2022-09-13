//A program that displays the difference between preincrementing and postincrementing with ++  - Last Edited 12/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	int a = 1; //defining integer for postincrementing 
	int b = 1; //defining integer for preincrementing

	//demonstrate postincrementing 
	printf("First we have the number: %d\n", a); //printing 1
	printf("Then the postincrement operator will first display the original number: %d\n", a++); //printing 1 and then postincrement
	printf("After postincrementing we will get the final result: %d\n", a); //printing 2

	//demonstrate preincrementing
	printf("First we have the number: %d\n", b); //printing 1
	printf("First we will preincrement and then immediately display the result of the operation: %d\n", ++b); //preincrement and then printing 2
	printf("The final result of the operation is the number: %d\n", b); //printing 2
} //end main 