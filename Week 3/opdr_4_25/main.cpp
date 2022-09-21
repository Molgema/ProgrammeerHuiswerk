//A program that displays table of values from decimal number 1 to 256 with their binary, octaldecimal and hexadecimal counterparts - Last Edited 21/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) { 
	
	int largest = 256; //initializing largest decimal number we want to display in table of values
	
	printf("%7s%13s%17s%16s\n", "Decimal", "Binary", "Octaldecimal", "Hexadecimal"); //displaying heading table

	//displaying decimal, binary, octaldecimal and hexadecimal for each decimal number in table of values
	for (int decimal = 1; decimal <= largest; decimal++) {
		int bin = 0; //initializing binary number to be 0 each iteration
		int count = 1; //initializing count to be 0 each iteration
		int temp_number = decimal; //initializing decimal number we need to check for binary 

		//converting the decimal number to a binary number
		while (temp_number != 0) {
			int rem = temp_number % 2; //remainder should be 0 or 1
			temp_number /= 2; //dividing decimal number or quotient by 2
			bin += rem * count; //adding 0 or 1 in front of the binary number
			count *= 10; //simulating adding 0 or 1 in front of the binary number
		}
		
		printf("%7d%13d%17o%16X\n", decimal, bin, decimal, decimal); //displaying decimal, binary, octal and hexadecimal for each iteration
	} //end for
} //end main
