//A program that shows the sum of all possible throws for each combination with two six sided dices  - Last Edited 20/10/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 36

//generating a random seed
void randomize() {
	srand((unsigned)time(NULL));
}


//rolling the x sided die given the number of sides
int roll(int x) {
	return (rand() % x) + 1;
}

int main(void) {
	int total[SIZE] = {};
	int d1, d2, index = 0, counter = 1; 
	int sim = 36000; 

	randomize(); 
	
	for (int i = 1; i <= sim; i++) {
		d1 = roll(6); 
		d2 = roll(6); 

		switch (d1) {
			case 1:
				switch (d2) {
					case 1:
						total[0]++;
						break; 
					case 2:
						total[1]++;
						break;
					case 3:
						total[2]++;
						break;
					case 4:
						total[3]++;
						break;
					case 5:
						total[4]++;
						break;
					case 6:
						total[5]++;
						break;
				}

				break;

			case 2: 
				switch (d2) {
				case 1:
					total[6]++;
					break;
				case 2:
					total[7]++;
					break;
				case 3:
					total[8]++;
					break;
				case 4:
					total[9]++;
					break;
				case 5:
					total[10]++;
					break;
				case 6:
					total[11]++;
					break;
				}

				break;

			case 3:
				switch (d2) {
				case 1:
					total[12]++;
					break;
				case 2:
					total[13]++;
					break;
				case 3:
					total[14]++;
					break;
				case 4:
					total[15]++;
					break;
				case 5:
					total[16]++;
					break;
				case 6:
					total[17]++;
					break;
				}

				break;

			case 4:
				switch (d2) {
				case 1:
					total[18]++;
					break;
				case 2:
					total[19]++;
					break;
				case 3:
					total[20]++;
					break;
				case 4:
					total[21]++;
					break;
				case 5:
					total[22]++;
					break;
				case 6:
					total[23]++;
					break;
				}

				break;

			case 5:
				switch (d2) {
				case 1:
					total[24]++;
					break;
				case 2:
					total[25]++;
					break;
				case 3:
					total[26]++;
					break;
				case 4:
					total[27]++;
					break;
				case 5:
					total[28]++;
					break;
				case 6:
					total[29]++;
					break;
				}

				break;

			case 6: 
				switch (d2) {
				case 1:
					total[30]++;
					break;
				case 2:
					total[31]++;
					break;
				case 3:
					total[32]++;
					break;
				case 4:
					total[33]++;
					break;
				case 5:
					total[34]++;
					break;
				case 6:
					total[35]++;
					break;
				}

				break;
		}
	}

	printf("%11s%10s%10s%10s%10s%10s\n", "1", "2", "3", "4", "5", "6");

	for (size_t j = 0; j < 6; ++j) { 
		printf("%d", counter);
		counter++;

		for (size_t k = 0; k < 6; ++k) {
			printf("%10d", total[index]);
			index++;
		}

		puts("");
	}
}