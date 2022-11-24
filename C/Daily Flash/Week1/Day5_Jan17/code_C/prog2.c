/*
 * 
Program 2: Write a program that takes electricity unit charges as input and
calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit.
*
*/

#include <stdio.h>

void main() {

	int unit;
	float bill;
	
	//take untis from user
	printf("Enter the Electricity unit: ");
	scanf("%d", &unit);

	if( unit < 0) {
		printf("Unit cannot be negative digit\n");
		exit(0);
	}
	
	if(unit <= 50) 
		printf("Electricity bill for unit %d : %.2f Rs\n", unit , unit*0.50);

	else if( unit > 50 && unit <= 150) 
		printf("Electricity bill for unit %d : %.2f Rs\n", unit , unit*0.75);

	else if(unit > 150 && unit <= 250 ) 
		printf("Electricity bill for unit %d : %.2f Rs\n", unit , unit*1.20);
	
	else if(unit > 250)
		printf("Electricity bill for unit %d : %.2f Rs\n", unit , unit*1.50);
}
