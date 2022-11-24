/*
 * Program 5: Write a Program calculates mid-point of a line made up of two
points A (4, 5) & B (2, 4).
{Note: mid (X, Y) = { (( x1 + x2) / 2), ((y1 + y2) / 2) } }
Output: Mid-Point of Line AB = (3, 4.5)
*/

#include <stdio.h>

void main() {
	int x1,y1,x2,y2;
	printf("Enter x-y coordinates of first points: ");
	scanf("%d%d",&x1,&y1);
	
	printf("Enter x-y coordinates of second points: ");
	scanf("%d%d",&x2,&y2);
	
	//mid points
	float X,Y;
	X = (x1+x2) / 2;
	Y= (y1+y2)/2;
	printf("Mid-points of line = (%.1f, %.1f)\n",X,Y);

}
