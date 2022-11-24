/*4.Write a C program to take input from user and check whether the number is
Perfect number or not. Using while loop.
{Note: if sum of all perfect divisors of a number is equal to that number then that
number is termed as perfect number}*/



#include<stdio.h>

void main()  {

	int num,sum=0;		//type int
				//initial value num= grabage value
				//		sum=0

	printf("Enter num: ");
        scanf("%d",&num);	//get value from user and stored in variable num.

	int i=1;
	while(i<=num/2)  {	// here we used condition num/2 because any number has divisor within the range 1 to num/2
				//e.g 12 have divisors 1,2,3,4,6 means upto 12/2 = 6

		if(num%i==0)  {		//divisors are those numbers which gives modulas 0 when we take num%divisors

			sum=sum+i;
		}
		i++;
	}
	if(sum==num)   {	//condition become true when given number and sum of the divisors of that number is equal.

		printf("%d is perfect number.\n",num);
	}
	else  {
		printf("%d is NOT perfect number.\n",num);
	}
}
