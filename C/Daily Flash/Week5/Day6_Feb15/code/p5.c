/*
 * Program 5: Write a Program that takes a number as input from user and prints
the factorials of each digit.
Input: 141
Output:
The Factorial of 1 is 1.
The Factorial of 4 is 24.
The Factorial of 1 is 1.
*
*/

#include <stdio.h>

//calculate factorial 
void fact(int* arr, int length) {
	int fact, temp;

	for(int i=length-1 ; i>=0; i--) {
		fact = 1;
		if(*(arr+i) == 0)
			fact = 1;
		else {
			//calculat factorial of each digit
			temp = *(arr+i);
			while(temp) {
				fact *= temp;
				temp--;
			}
		}
	
		printf("The Factorial of %d is %d\n", *(arr+i) , fact);
	
	}
}

void  main() {
	int num,rem,factArr[20], len=0;
	printf("Enter num: ");
	scanf("%d", &num);
	
	while(num) {
		rem = num%10;
		factArr[len++] = rem;
		num /=10;
	}
	/*for(int lc=0; lc<=len-1; lc++)
		printf("%d ",factArr[lc]);*/
	fact(factArr,len);
}
