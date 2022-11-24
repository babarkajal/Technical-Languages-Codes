/*Program 5: Write a Program that takes an array as input from user and prints
the array in reverse order.
Input: 1 2 3 4 5 6 7 8
Output: 8 7 6 5 4 3 2 1
*/

#include<stdio.h>

void main() {
	int n;
	printf("ENTER SIZE OF ARRAY: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements: ", n);
	for(int i=0; i<n; i++) 
		scanf("%d",&arr[i]);

	printf("Array elements in reverse order\n");
	for (int i=0; i<n;i++) 
		printf("%d\t",arr[n-i-1]);
	printf("\n");

}	
