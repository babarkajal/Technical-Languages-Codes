/*Program 1. Write a C Program to take a number as input from user and print sum of
all natural numbers from 1 to up to that number.*/

#include<stdio.h>

void main()  {

	int num;	//type integer
			//initial value garbage

	printf("Enter number: ");
	scanf("%d",&num);	//get value from user and stored in variavle num.

	int i=1,sum=0;		//type integer
				//initial value i=1 and sum=0

	while(i<=num) {		//condition will be false when i becomes num+1.

		sum=sum+i;     
		i++;
	}
	printf("The sum of all natural number between 1 to %d is: %d\n",num,sum);

}
