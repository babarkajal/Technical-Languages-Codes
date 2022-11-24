/*
 * Program 5: Write a Program that prints frequency of each unique digit from a
number provided by user.
Input: 1231234
Output:
Frequency of 1 is 2
Frequency of 2 is 2
Frequency of 3 is 2
Frequency of 4 is 1
*/

#include<stdio.h>
#include<malloc.h>



void main() {
	int num, frequnecy;
	printf("Enter integer: ");
	scanf("%d",&num);
	
	int *arr = (int*)malloc(sizeof(int)*10);
	
	//copy the original num into the temp;
	int temp = num, rem;
	while(temp) {
		rem = temp%10;
		arr[rem]++;
		temp /=10;
	}

	for(int i=0; i<10;i++) {
		if(arr[i] != 0)
			printf("The frequency of %d is %d\n", i , arr[i]);
	}


}
