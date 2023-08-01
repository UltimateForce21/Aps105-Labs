#include <stdio.h>

int main(void) {
	const double CmPerInch = 2.54;
	const double CmPerMetre = 100.00;
	const int InchesPerFoot = 12;
	const int InchesPerYard = 36;
	
	double distance;
	printf("Please provide a distance in metres: ");
	scanf("%lf", &distance);

    /* distance = 3.376; */
	
	double distanceInInches = distance*CmPerMetre / CmPerInch;

    /* printf("\n Total distance in Inches: %lf\n", distanceInInches);//delete */

	
	// truncate fractional part to get # of inches
	int inches = distanceInInches;
	distanceInInches = distanceInInches - inches;
	
    /* printf("\n Total Inches: %d\n", inches);//delete
    printf("\n Total distance in Inches: %lf\n", distanceInInches);//delete */

	int yards = inches / InchesPerYard;
	
	// how many inches are left after extracting yards
	inches = inches - yards*InchesPerYard;

    /* printf("Yards: %d\n", yards);//delete
    printf("\nInches after yards deducted: %d\n", inches);//delete */
	
	int feet = inches / InchesPerFoot;
    /* printf("Feet: %d\n", feet);//delete */
	
	// how many inches are left after extracting feet
	inches = inches - feet*InchesPerFoot;
	
	printf("%d yards, %d feet, %d inches, %.2lf inches remainder\n", yards, feet, inches, distanceInInches);
	
	return 0;
}