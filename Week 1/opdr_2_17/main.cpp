//A program to calculate final velocity 'v' and distance travelled 's' - Last Edited 12/9/22
//Niels Boer
//s1183510
//E1A

#include <stdio.h>

int main(void) {

	//prompting initial velocity, acceleration and time that has elapsed since the beginning of the motion
	printf("Enter initial velocity and acceleration of the object and the time that has elapsed: \n");

	int u, a, t; //declaring initial velocity, initial acceleration and elapsed time

	scanf_s("%d %d %d", &u, &a, &t); 

	int v = u + a * t; //declaring final velocity and caluculating the result
	int s = u * t + (1 / 2) * a * t * t; //declaring distance travelled and calculating the result

	//displaying result final velocity and distance travelled to user
	printf("The final velocity is %d and the distance travlled is %d.\n", v, s);
}//end main