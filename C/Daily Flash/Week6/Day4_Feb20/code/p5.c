/*
 * Program 5: Write a Program that takes a number as input from user and prints
only perfect digits if it have any else prints appropriate message.
Input: 24
Output: The number 24 does not have any digit, which is perfect in nature.
*
*/

#include <stdio.h>

int flag = 0;
void perfect(int num) {
	int sumOfDiv = 0;
	for(int div = 1; div<=num-1; div++) {
		if(num%div == 0)
			sumOfDiv += div;
	}
	if(sumOfDiv==num) { 
		printf("%d ",num );
		flag = 1;

	}
}

void main() {
	int num, rem;
	printf("Enter num: ");
	scanf("%d",&num);
	int original = num;
	printf("The perfect num from digit %d: ", num);	
	while(num) {
		rem = num%10;
		perfect(rem);
		num/=10;		
	}
	if(!flag)
		printf("The num %d does no have any digit, which is perfect in nature \n", original);
	else
		printf("\n");
}
