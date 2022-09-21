//
//
//

#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 0; 

	for (int c1 = 1; c1 <= a; c1++) {
		for (int c2 = 1; c2 <= c1; c2++) {
			printf("%s", "*"); 
		}

		printf("\n");
	}

	for (int c1 = 10; c1 >= b; c1--) {
		for (int c2 = 1; c2 <= c1; c2++) {
			printf("%s", "*");
		}
		
		printf("\n");
	}

	for (int c1 = 10; c1 >= b; c1--) {
		for (int c2 = 10; c2 >= c1; c2--) {
			printf("%s", " ");
		}

		for (int c3 = 1; c3 <= c1; c3++) {
			printf("%s", "*");
		}
		
		printf("\n");
	}

	for (int c1 = 1; c1 <= a; c1++) {
		for (int c2 = 10; c2 >= c1; c2--) {
			printf("%s", " ");
		}

		for (int c2 = 1; c2 <= c1; c2++) {
			printf("%s", "*");
		}

		printf("\n");
	}
}