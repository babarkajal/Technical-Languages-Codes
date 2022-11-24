/*
 * Write a program to take two  arrays of type int from user and print these arrays. Check whether all elements of first array are present in second array or not. 
 * If yes then print 1 or print -1. (Use pointer for all operations)
 */

#include <stdio.h>

//entry function
void main() {
	
	/*
	 * n1 = size of first array
	 * n2 = size of second array
	 */

	int n1, n2;
	
	printf("Enter size of first array: ");
	scanf("%d",&n1);
	
	//declare int array of size n1
	int arr1[n1];
	
	//accept elements
	printf("Enter %d elements in array 1: ",n1);
 	for(int lc =0; lc < n1 ; lc++) {
		scanf("%d", (arr1+lc));

	}

	
	printf("Enter size of second array: ");
	scanf("%d",&n2);

	//declare second array of size n2	
	int arr2[n2];
	
	//accept elements
	printf("Enter %d elements in array 2: ",n2);
 	for(int lc =0; lc < n2; lc++) {
		scanf("%d", (arr2+lc));
	}


	//print array1 and array2
	printf("\nElements in array 1: ");
 	for(int lc =0; lc < n1; lc++) {
		printf("%d   ", *(arr1+lc));
	}
	
	//print array2
	printf("\n\nElements in array 2: ");
 	for(int lc =0; lc < n2; lc++) {
		printf("%d   ", *(arr2+lc));
	}
	printf("\n\n");
	

}
