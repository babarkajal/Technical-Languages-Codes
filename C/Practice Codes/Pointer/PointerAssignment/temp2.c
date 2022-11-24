/*
 * Write a program to take two  arrays of type int from user and print these arrays. Print sum of array elements with same index  
 * e.g *(array1+0) + *(array2+0) , 
 * Note: If lenght of both array is not same then print length is not same to perform addition operation 
 * (Use pointers for all operations)
 *
 * Input:
 * Elements in array 1: 10   20   30   40   50
 * Elements in array 2: 1   2   3   4   5
 * Output:
 * Addition of two array: 11   22   33   44   55
 */

#include <stdio.h>
#include <stdlib.h>

//entry function
void main() {
	
	/*
	 * n1 = size of first array
	 * n2 = size of second array
	 */

	int n1, n2;
	
	printf("\nEnter size of first array: ");
	scanf("%d",&n1);
	
	printf("\nEnter size of second array: ");
	scanf("%d",&n2);
	
	//test case : length should be same
	if(n1!= n2) {
		printf("\nLength of two arrays is not same to perfrom addition operation\n");
		exit(0);				//this function is used to exit from program. It is declared in stdlib header file
	}


	//declare int array of size n1
	int arr1[n1];
	//declare second array of size n2	
	int arr2[n2];
	
	//accept elements
	printf("Enter %d elements in array 1: ",n1);
 	for(int lc =0; lc < n1 ; lc++) {
		scanf("%d", (arr1+lc));

	}
	
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
	
	
	int sum =0;
	printf("Addition of two array: ");
	for(int i=0; i<n1; i++) {
		
		sum  = *(arr1+i) + *(arr2+i);
		/* e.g consider arrays frist element 10 and 20 and addresses are 100 and 200
		 * sum = *(arr1 + 0) + *(arr2+0)
		 *    = *(100+0) + *(200+0)
		 *    = *100 + *200
		 *    = 10+20
		 *    = 30
		 */
		printf("%d   ", sum);			//print the sum
	
	}
	printf("\n\n");

}//end of main
