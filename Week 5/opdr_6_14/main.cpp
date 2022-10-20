//A program that displays all unique elements in the collection of two arrays filled with numbers  - Last Edited 20/10/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>
#define SET 10
#define UNION 20

void sortUnion(int array[], size_t size) {
	for (size_t start = 0; start < UNION; start++) {
		for (size_t loop = start; loop < UNION; loop++) {
			if (array[loop] < array[start]) {
				int temp = array[start];
				array[start] = array[loop];
				array[loop] = temp;
			}
		}
	}
}

int removeElements(int array[], size_t size) {

	for (size_t i = 0; i < size; i++) {
		for (size_t j = i + 1; j < size;) {
			if (array[i] == array[j]) {
				for (size_t k = j; k < size; k++) {
					array[k] = array[k + 1];
				}
				size--;
			}
			else {
				j++;
			}
		}
	}

	return size;
}
 
int main(void) {
	int a[SET] = {};
	int b[SET] = {};
	int temp[UNION] = {};
	int index = 0; 

	//reading elements arrays
	printf("Enter the elements for the first array: \n");

	for (int counter1 = 0; counter1 < SET; counter1++) {
		scanf_s("%d", &a[counter1]);
	}

	printf("Enter the elements for the second array: \n");

	for (int counter2 = 0; counter2 < SET; counter2++) {
		scanf_s("%d", &b[counter2]);
	}

	//putting sets of numbers together in one array
	for (size_t a_counter = 0; a_counter < SET; a_counter++) {
		temp[index] = a[a_counter];
		index++;
	}

	for (size_t b_counter = 0; b_counter < SET; b_counter++) {
		temp[index] = b[b_counter];
		index++;
	}

	sortUnion(temp, UNION); 
	int size = removeElements(temp, UNION);

	printf("%d", size);

	for (size_t i = 0; i < size; i++) {
		printf("%d\n", temp[i]);
	}
}