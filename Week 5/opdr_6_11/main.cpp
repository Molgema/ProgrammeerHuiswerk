//A program that calculates the total charge for the charges of three cars for rental hours less than 72  - Last Edited 27/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>
#define SIZE 10

int main(void) {
	int a[SIZE] = {6, 7, 8, 9, 10, 10, 9, 8, 7, 6};

	for (size_t start = 0; start < SIZE; start++) {

		for (size_t loop = start; loop < SIZE; loop++) {

			if (a[loop] < a[start]) {

				int temp = a[start];
				a[start] = a[loop];
				a[loop] = temp; 
			}
		}
	}

	for (size_t print = 0; print < SIZE; print++) {
		printf("%d\t", a[print]);
	}
}