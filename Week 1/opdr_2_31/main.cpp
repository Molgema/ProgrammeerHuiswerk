//A program that displays a table with squares and cubes from the numbers 0 to 10 - Last Edited 12/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {
	int n0 = 0, n1 = 1, n2 = 2, n3 =3, n4 = 4, n5 = 5, n6 = 6, n7 =7, n8 = 8, n9 = 9, n10 = 10; //declaring variables for the numbers 0 to 10

	//displaying the table of values 
	printf("number\tsquare\tcube\n");
	printf("%d\t%d\t%d\n", n0, n0 * n0, n0 * n0 * n0);
	printf("%d\t%d\t%d\n", n1, n1 * n1, n1 * n1 * n1);
	printf("%d\t%d\t%d\n", n2, n2 * n2, n2 * n2 * n2);
	printf("%d\t%d\t%d\n", n3, n3 * n3, n3 * n3 * n3);
	printf("%d\t%d\t%d\n", n4, n4 * n4, n4 * n4 * n4);
	printf("%d\t%d\t%d\n", n5, n5 * n5, n5 * n5 * n5);
	printf("%d\t%d\t%d\n", n6, n6 * n6, n6 * n6 * n6);
	printf("%d\t%d\t%d\n", n7, n7 * n7, n7 * n7 * n7);
	printf("%d\t%d\t%d\n", n8, n8 * n8, n8 * n8 * n8);
	printf("%d\t%d\t%d\n", n9, n9 * n9, n9 * n9 * n9);
	printf("%d\t%d\t%d\n", n10, n10 * n10, n10 * n10 * n10);
}