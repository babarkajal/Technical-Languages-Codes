/*Program 1: Write a Program that prints Sum an Arithmetic Progression (A.P.)
series. Take Starting element, Total count of elements in A.P. & the Common
Difference from user.
Input:
Starting Element: 1
Number of Elements: 8
Common Difference: 5
Output: The AP is: 1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148
*/


#include <stdio.h>

void main() {
	int  start , no, diff;
	printf("Enter start: ");
	scanf("%d",&start);
	printf("Enter No of elements: ");
	scanf("%d",&no);

	printf("Enter diff: ");
	scanf("%d",&diff);
	
	int sumOfAP = 0;
	for(int i=1; i<=no; i++) {
		sumOfAP += start;
		printf("%d  ", start);
		start = start + diff;
	}	
	
	printf("\nThe sum of AP is %d\n", sumOfAP);

}
