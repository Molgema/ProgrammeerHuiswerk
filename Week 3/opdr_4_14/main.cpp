//
//
//

#include <stdio.h>

int main(void) {
	double largest = 20;
	double factorial = 1; 

	printf("Number\tFactorial\n"); 
	
	for (int counter = 1; counter <= largest; counter++) {
		factorial *= counter; 

		printf("%d\t%.0f\n", counter, factorial);
	}
} //end main