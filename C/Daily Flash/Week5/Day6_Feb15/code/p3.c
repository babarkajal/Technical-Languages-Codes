/*
 * Program 3: Write a Program to that accepts an integer value from user and
prints the Square of each digit.
Input: 1234
Output:
The Square of 1 is 1
The Square of 2 is 4
The Square of 3 is 9
The Square of 4 is 16
*
*/

#include <stdio.h>


void main() {
	int num,rem;
	printf("Enter num: ");
	scanf("%d",&num);
	int arr[100], len=0;
	while(num) {
		rem = num%10;
		arr[len++] = rem;
		num/=10;
	}

	for (int lc=len-1; lc>=0; lc--) 
		printf("The square of %d is %d\n",arr[lc], arr[lc]*arr[lc]);
		

}
