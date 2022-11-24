/*
 * Program 3: Write a Program that accepts a number from user and prints
second minimum digit from that number.
Input: 12357798
Output: The Second minimum Digit from number 12357798 is 2
*
*/

#include <stdio.h>
#include <malloc.h>

void main() {

	//accpet num
	int *ptr = (int*)malloc(4);
	printf("Enter num: ");
	scanf("%d",ptr);

	int temp = *ptr, rem;		//store original num in temp var
	int max = temp%10,secondMin;	//store the last digit as max

	//array to store digits
	int arr[30],len=0;

	while(temp) {
		rem = temp%10;
		arr[len++] = rem;
		//if max is less than the another digit in the num then store it into max
		if(max < rem) {
			max = rem;
		}
		temp /=10;
	}

	//sort the array using bubble sort
	for(int lc =0 ;lc<len; lc++) {
		for(int ilc=lc+1; ilc<len; ilc++) {
			
			//compare two adjcent num
			if(arr[lc] > arr[ilc]) {
				//if less then swap
				temp = arr[lc];
				arr[lc]=arr[ilc];
				arr[ilc] = temp;
			}

		}
	}

	/*print sorted array
	for(int i=0; i<len; i++)
		printf("%d\t ", arr[i]);
	printf("\n");
	*/
	
	//in the ascending sorted array 2 element is the secondMin
	secondMin = arr[1];
	printf("The Second maximum digit from num %d is %d\n", *ptr,secondMin);
}
