/*
 * Program 5: Write a Program calculates mid-point of a line made up of two
points where user provides the two points.
Input:
Enter Point A (x1, y1) = 4 5
Enter Point B (x2, y2) = 2 4
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
