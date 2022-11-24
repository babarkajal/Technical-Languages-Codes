/*Program 1: Write a Program to take all three sides of a triangle from user and
check whether the triangle satisfies the Pythagorean Theorem.
Input:
Side 1 = 3
Side 2 = 4
Hypotenuse = 5
Output: Triangle Satisfies the Pythagorean Theorem.
*/


#include<stdio.h>

void main(){
	
	int side1,side2,hypo;
	printf("Enter the three sides of the triangle: ");
	scanf("%d%d%d",&side1,&side2,&hypo);

	if((side1*side1)+(side2*side2)==(hypo*hypo))
		printf("Triangle satisfies the pythagorean theorem");
	else
		printf("Triangle not satifies the pythagorean theorem");
		
	
}	
