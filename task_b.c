#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main(void){
    double height = 0;
	double volume = 0;
	printf("Enter height: ");
	scanf("%lf", &height);
	
	
	// Your code below here
	double radius = 0; //creates the variable radius
	radius = 2.2; // sets the radius to constant 2.2
	volume = abs(height)*(M_PI * radius * radius); // calculate the volume of cylinder 
	
	
	// Do not edit below here
	printf("Volume: %.2f", volume);
	return 0;
}