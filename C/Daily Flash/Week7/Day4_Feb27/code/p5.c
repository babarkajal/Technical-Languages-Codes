/*
 * Program 5: Write a Program calculates slope of a line if user provides the Two
Points A & B of that line.
{Note: Slope of a line is computed as m = ((y2-y1)/(x2-x1)) }
Input:
Point A (x1, y1) = 5 2
Point B (x2, y2) = 8 1
Output: Slope of line AB is 3
*
*/

#include <stdio.h>

void main() {
	int x1,y1,x2,y2;
	printf("Enter x-y coordinates of first points: ");
	scanf("%d%d",&x1,&y1);

	printf("Enter x-y coordinates of second points: ");
	scanf("%d%d",&x2,&y2);

	//slop of the line
	int m =( (y2-y1) / (x2-x1));
	printf("Slop of line = %d\n",m);

}
