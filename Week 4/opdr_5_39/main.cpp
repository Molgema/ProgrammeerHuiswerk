//A program that determines the gcd of numbers x and y given by user - Last Edited 4//10/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int readInteger(void);
int gcd(int x, int y); 

int readInteger(void) {
	int input;
 
	printf("Enter an integer: ");
	scanf_s("%d", &input);
	

	return input;
}

int gcd (int x, int y) {
	if (y == 0) {
		return x; 
	}
	else {
		return gcd(y, x % y); 
	}
}


int main(void) {
	int integer1;
	int integer2;
	int result; 

	integer1 = readInteger(); 
	integer2 = readInteger();

	result = gcd(integer1, integer2); 

	printf("The gcd of %d and %d is %d.\n", integer1, integer2, result);
}