/*
Program 3: Write a Program that accepts a number from user and prints
second Maximum digit from that number.
Input: 12357798
Output: The Second Maximum Digit from number 12357798 is 8
*/

#include <stdio.h>
#include <malloc.h>

void main() {
	int *ptr = (int*)malloc(4);
	printf("Enter num: ");
	scanf("%d",ptr);

	int temp = *ptr, rem;	//store original num in temp var
	int max = temp%10,secondMax;	//store the last digit as max
	
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

	secondMax =  arr[0];
	for(int i=1;i<len;i++) {
		if(secondMax < arr[i] && arr[i] < max)
			secondMax = arr[i];
	}

	printf("The Second maximum digit from num %d is %d\n", *ptr,secondMax);
}
