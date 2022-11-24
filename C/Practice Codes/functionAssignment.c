/* Write a program to take array form user of any type(int ,char, or float). Pass the array to the function named as minimum() and return the minimum num. Print this num in main
Input: 6 7 8 4 3
Output: 3
*/

#include <stdio.h>

//function declaration
int minimum(int arr[], int n);

//entry function
void main() {

	/* declare variable n to store size of the array */
        int n;
	/* take size from user */
        printf("Enter size of an array: ");
	do {
        	scanf("%d", &n);
		if(n<=0) 
			printf("Enter non-zero and non-negative size\n");
	}while(n<=0);

	/* declare array of size n */
        int arr[n];
	
	/* take elements from user */
        printf("Enter elements in an array: ");
        for(int i=0; i<n ;i++) {
                scanf("%d",(arr+i));
        }
	
	/* print entered array */
        printf("Entered array is: ");
        for(int i=0; i<n; i++) {
                printf("%d  ", arr[i]);
        }
	
        printf("\n\n");

	/* find mnimum number using function minimum() */
        printf("Minimum number from the given array: %d\n\n",minimum(arr, n));

}

/* function minimum()
 * return type: int
 * paramters: 
 * 	arr : array
 * 	n  : size of an array
 */

int minimum(int arr[], int n) {
        /* consider first elements of an array as minimum */
	int min = arr[0];
	
	/* traverse the given array */
        for(int lc = 0; lc < n; lc++) {

                /* if any element found less than min then replace the min value */
		if(arr[lc] < min)
                        min = arr[lc];
        }
	//return the min value
        return min;
}
