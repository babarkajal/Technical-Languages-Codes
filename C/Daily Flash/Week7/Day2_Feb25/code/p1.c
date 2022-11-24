/*
 * Program 1: Write a Program that prints the Harshad numbers bounding
between numbers entered by user.
Input:
Lower Bound: 1
Upper Bound: 100
Output: 1 2 3 4 5 6 7 8 9 10 12 18 20 21 24 27 30 36 40 42 45 48 50 54 60 63
70 72 80 81 84 90 100
*
*/


#include <stdio.h>
int isHarshad(int num) {
	int sum = 0;
	int temp = num, rem;
	while(temp) {
		rem = temp%10;
		sum+=rem;
		temp /=10;
	}
	
	//if the num is divisible by the sum of its digits then it is a harshad num
	if(num%sum ==0)
		return 1;
	else
		return 0;

}//end of fun

void main() {
	int lower , upper ;
	printf("Enter lower  Bound for the harshad series: ");
	scanf("%d", &lower);
	
	printf("Enter upper  Bound for the harshad series: ");
	scanf("%d", &upper);

	for(int i=lower; i<=upper; i++ ) {
		if(isHarshad(i))
			printf("%d  ", i);
	}
	printf("\n");

}
