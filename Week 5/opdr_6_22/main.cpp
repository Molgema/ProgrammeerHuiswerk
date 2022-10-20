//A program that shows the total value of the sales for different products sold by four differnet salesmen  - Last Edited 20/10/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>
#define PERSON 4
#define PRODUCT 5

void readSales(float a[][PERSON], size_t product, size_t person) {
	int personIndex = 0, productIndex = 0, sold;

	while (personIndex != -1) {

		printf("Enter the salesperson number 1 to 4 ( enter -1 to stop):\n");
		scanf_s("%d", &personIndex);

		if (personIndex >= 0 && personIndex <= 4) {
			while (productIndex != -1) {
				printf("Enter the product number 1 to 5 for salesperson number %d ( enter -1 to go back to the enter another salesperson):\n", personIndex);
				scanf_s("%d", &productIndex);

				if (productIndex >= 0 && productIndex <= 5) {
					printf("Enter the total dollar value salesperson number %d sold of product %d\n", personIndex, productIndex);
					scanf_s("%d", &sold); 

					a[productIndex - 1][personIndex - 1] += sold;

				}
				else if ((productIndex < -1) || (productIndex == 0) || (productIndex > 5)) {
					productIndex = 0;
					printf("Enter a number between 1 and 5.\n");
				}
				else {
					productIndex = -1;
				}
			}
			productIndex = 0;
		}
		else if ((personIndex < -1) || (personIndex == 0) || (personIndex > 4)) {
			personIndex = 0;
			printf("Enter a number between 1 and 4.\n");
		}
		else {
			personIndex = -1;
		}
	}
}

void printSales(float a[][PERSON], size_t product, size_t person) {
	float rowSum = 0, colSum = 0; 

	printf("\n\n");

	//print table header
	printf("%15s", "Product");
	for (size_t i = 0; i < person; i++) {
		printf(" Salesperson %d ", i + 1);
	}
	printf("%s\n", "Product Sum");

	for (size_t i = 0; i < product; i++) {
		for (size_t j = 0; j < person; j++) {
			if (j == 0) {
				printf("%15d\t", i + 1);
			}

			printf("%13.2f", a[i][j]);

			if (j == person - 1) {
				for (size_t j = 0; j < person; j++) {
					rowSum += a[i][j];
				}

				printf("%13.2f", rowSum);

				rowSum = 0;
			}
		}

		puts("");
	}

	printf("%4s", "Salesperson Sum");
	for (size_t j = 0; j < person; j++) {
		for (size_t i = 0; i < product; i++) {
			colSum += a[i][j];
		}
		printf("%14.2f", colSum); 
		colSum = 0; 
	}
}

int main(void) {
	float sales[PRODUCT][PERSON] = {0};

	readSales(sales, PRODUCT, PERSON); 
	printSales(sales, PRODUCT, PERSON);
}