/*
 * Program 1: Write a Program to take all three sides of a triangle from user and
check whether the triangle satisfies the Pythagorean Theorem.
Input:
Side 1 = 3
Side 2 = 4
Hypotenuse = 5
Output: Triangle Satisfies the Pythagorean Theorem.
*
*/

#include <stdio.h>

void main() {
	int s1,s2,hypo;

	printf("Enter Three sides of triangle: \n");
	//enter sides
	printf("Enter side 1: ");
	scanf("%d", &s1);
	printf("Enter side 2: ");
	scanf("%d", &s2);
	
	//enter hypotenuse
	printf("Enter hypotenuse: ");
	scanf("%d",&hypo);
		
	int c =  (hypo*hypo == (s1*s1 + s2*s2) ) ? 1 : 0 ;

	if(c) 
		printf("Triangle satisfies the Pythangorean Theorem\n");
	else
		printf("Triangle not satisfies the Pythangorean Theorem\n");
	

}

