/*
 * Program 5: Write a Program that calculates addition of two complex numbers.
Input:
Enter Number 1:
Real Part: 5
Imaginary Part: 3
Enter Number 2:
Real Part: 2
Imaginary Part: 1
Output: The Addition of 5+3i & 2+I is 7+4i.
*/

#include <stdio.h>


void main() {
	int c1,c2,i1,i2;

	printf("Enter first complex number\n");
	printf("Real Part: ");
	scanf("%d",&c1);
	printf("Imaginary Part: ");
	scanf("%d",&i1);

	printf("Enter second complex number\n");
	printf("Real Part: ");
	scanf("%d",&c2);
	printf("Imaginary Part: ");
	scanf("%d",&i2);

	int c3 = c1+c2 ,i3 = i1+i2 ;
	printf("Addition of %d + %di and %d + %di = %d + %di\n", c1,i1 , c2, i2 , c3 , i3);
	

}
