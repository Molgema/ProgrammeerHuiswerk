//A program that calculates the total charge for the charges of three cars for rental hours less than 72  - Last Edited 27/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>
#define SIZE 10
#define FREQUENCY_SIZE 9

void calculateCommission(float a[], size_t size) {
	for (size_t i = 0; i < size; i++) {
		a[i] = 200 + (0.09 * a[i]);
	}
} 

int main(void) {

	int index = 0; 
	int a = 200;
	int b = 299;
	float commissions[SIZE] = { 0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000 };
	int frequency[FREQUENCY_SIZE] = { 0 };

	calculateCommission(commissions, SIZE);

	for (int j = 0; j < SIZE; j++) {
		int check = commissions[j] / 100;
		switch (check) {
		case 2:
			++frequency[0];
			break;
		case 3:
			++frequency[1];
			break;
		case 4:
			++frequency[2];
			break;
		case 5:
			++frequency[3];
			break;
		case 6:
			++frequency[4];
			break;
		case 7:
			++frequency[5];
			break;
		case 8:
			++frequency[6];
			break;
		case 9:
			++frequency[7];
			break;
		case 10:
			++frequency[8];
			break;
		default:
			++frequency[8];
			break;
		}
	}

	printf("%s%s\n", "Commissions", "Frequency");

	for (size_t k = 0; k < FREQUENCY_SIZE; k++) {
		if (a == 1000) {
			printf("$%d and over%d\n", a, frequency[k]);
		}
		else {
			printf("$%d-%d%d\n", a, b, frequency[k]);
		}
		a += 100; 
		b += 100;
	}
}