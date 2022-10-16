//A program that displays all unique elements in the collection of two arrays filled with numbers  - Last Edited 27/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>
#define SIZE 10

void sortArray(int array[], size_t size) {
	for (size_t start = 0; start < SIZE; start++) {

		for (size_t loop = start; loop < SIZE; loop++) {

			if (array[loop] < array[start]) {

				int temp = array[start];
				array[start] = array[loop];
				array[loop] = temp;
			}
		}
	}
}
 
int main(void) {
	int a[SIZE] = {};
	int b[SIZE] = {};
	int temp[2 * SIZE] = {};
	int index = 0; 

	//reading elements arrays
	printf("Enter the elements for the first array: \n");

	for (int counter1 = 0; counter1 < SIZE; counter1++) {
		scanf_s("%d", &a[counter1]);
	}

	printf("Enter the elements for the second array: \n");

	for (int counter2 = 0; counter2 < SIZE; counter2++) {
		scanf_s("%d", &b[counter2]);
	}

	//putting sets together in one array
	for (size_t a_counter = 0; a_counter < SIZE; a_counter++) {
		temp[index] = a[a_counter];
		index++;
	}

	for (size_t b_counter = 0; b_counter < SIZE; b_counter++) {
		temp[index] = b[b_counter];
		index++;
	}

	sortArray(temp, 2 * SIZE); 

	for (size_t i = 0; i < 2 * SIZE; i++) {
		printf("%d\n", temp[i]);
	}
}