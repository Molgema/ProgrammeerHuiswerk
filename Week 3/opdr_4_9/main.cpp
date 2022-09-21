//
//
//

#include <stdio.h>

int main(void) {

	unsigned int amount;
	unsigned int value;

	float sum = 0; 

	printf("Enter the amount of values you want to sum: \n"); 
	scanf_s("%d", &amount); 


	for (int counter = 1; counter <= amount; counter++) {
		scanf_s("%d", &value); 
		sum += value; 
	}

	if (amount == 0) {
		printf("0 is not an acceptable amount.");
	}
	else {
		printf("The average of the sum of all the values is %.3f\n", sum / amount);
	}
}// end main