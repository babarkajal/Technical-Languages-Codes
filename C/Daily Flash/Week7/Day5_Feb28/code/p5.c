/*
 * Program 5: Write a Program calculates Distance between two points of a line,
if user provides Point A & Point B of that line.
{Note: Distance of a line is computed as d(line) =√(x2-x1) 2 + (y2-y1) 2 }
Input:
Point A (x1, y1) = 5 1
Point B (x2, y2) = 8 1
Output: Distance d(AB) = 3
*/

#include <stdio.h>

void main() {
	int x1,y1,x2,y2;
	printf("Enter x-y coordinates of first points: ");
	scanf("%d%d",&x1,&y1);

	printf("Enter x-y coordinates of second points: ");
	scanf("%d%d",&x2,&y2);

	//slop of the line
	int d = (x2-x1)+ (y2-y1);
	printf("Distance of line = %d\n",d);

}
