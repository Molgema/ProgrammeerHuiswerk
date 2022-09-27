//A program that calculates the total charge for the charges of three cars for rental hours less than 72  - Last Edited 27/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

//initializing variables with hours
const unsigned int HOURS_PER_DAY = 24; //initializing how many hours in a day
const unsigned int HOURS_WITHOUT_CHARGE = 8; //initializing how many hours that at least need to be paid 

//initializing variables with dollars
const float MINIMUM_FEE = 25.00; //initializing charge minimum fee that at least needs to be paid  
const int CHARGE_PER_HOUR = 5; //initializing charge that needs to be paid after hours without charge
const int MAXIMUM_CHARGE_DAY = 50; //initializing maximum charge that needs to be paid each day
const float SERVICE_TAX_PER_HOUR = 0.50; //initializing service tax that needs to be paid each hour

int promptHours(unsigned int carNumber); //prototype function for promptHours 
float calculateCharge(unsigned int hoursCarNumber); //prototype function for calculateCharge 

//calculates the charge for a car based on the input of the amount of hours given
float calculateCharge(unsigned int hoursCarNumber) {
	float charge = hoursCarNumber * SERVICE_TAX_PER_HOUR; 

	//checks if the car is rented more than 24 hours
	if (hoursCarNumber >= HOURS_PER_DAY) {
		int days = hoursCarNumber / HOURS_PER_DAY; //calculates the non decimal amount of days rounded down
		
		//checks if there is a 
		if (hoursCarNumber % HOURS_PER_DAY > 0) {
			days += 1; //adds extra day when rented more than 24 hours
		} //end if
		
		charge += days * MAXIMUM_CHARGE_DAY; //calculates charge for rented hours more than 24
	}
	else {
		charge += MINIMUM_FEE; 

		const int hoursExtraCharge = hoursCarNumber - HOURS_WITHOUT_CHARGE; 
		if (hoursExtraCharge > 0) {
			charge += hoursExtraCharge * CHARGE_PER_HOUR;
		}
	}

	return charge;
} //end calculateCharge

int promptHours(unsigned int carNumber) {
	int rentHours = -1; //

	while (rentHours == -1) {
		printf("Enter the hours rented for car %d: ", carNumber);
		scanf_s("%d", &rentHours);
	
		if (rentHours <= 0 || rentHours > 72) {
			printf("Please enter a value of hours greater than 0 and smaller than 72.\n");

			rentHours = -1;
		}
	}

	return rentHours;
} //end promptHours

int main(void) {

	unsigned int HOURS_CAR_1 = promptHours(1);
	unsigned int HOURS_CAR_2 = promptHours(2);
	unsigned int HOURS_CAR_3 = promptHours(3);
	unsigned int TOTAL_HOURS = HOURS_CAR_1 + HOURS_CAR_2 + HOURS_CAR_3; 

	float CHARGE_CAR_1 = calculateCharge(HOURS_CAR_1);
	float CHARGE_CAR_2 = calculateCharge(HOURS_CAR_2);
	float CHARGE_CAR_3 = calculateCharge(HOURS_CAR_3);
	float TOTAL_CHARGE = CHARGE_CAR_1 + CHARGE_CAR_2 + CHARGE_CAR_3; 

	printf("%s %11s %13s\n", "Car", "Hours", "Charge");
	printf("%s %11d %15.2f\n", "1", HOURS_CAR_1, CHARGE_CAR_1);
	printf("%s %11d %15.2f\n", "2", HOURS_CAR_2, CHARGE_CAR_2);
	printf("%s %11d %15.2f\n", "3", HOURS_CAR_3, CHARGE_CAR_3);
	printf("TOTAL %7d %15.2f", TOTAL_HOURS, TOTAL_CHARGE);
} //end main 