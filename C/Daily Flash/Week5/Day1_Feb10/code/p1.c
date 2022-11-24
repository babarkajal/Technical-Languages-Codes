/*
 * Program 1: Write a Program to print series of Abundant numbers up to Nth
element, where N is a number entered by user.
*/

#include <stdio.h>


void main() {
	int n;
	do {
		printf("Enter N for series: ");
		scanf("%d",&n);
		
		if(n< 0) 
			printf("Enter positive integers only: ");
	}while(n<0);

	//to store division addition
	int sumOfDiv;

	for(int num=1; num<=n; num++) {
		sumOfDiv = 0;
		for(int div=1; div<= num/2; div++) {
			//if num is divisile by the div then add it to the sumOfDiv
			if (num%div == 0) 
				sumOfDiv+=div;
		}

		//if the addition of all divisors 
		if(sumOfDiv > num) {
			printf("%d  ",num);
		}

	}
	printf("\n");
	
}
