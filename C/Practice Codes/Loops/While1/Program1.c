/*Program 1. Write a C Program to print the sum of all even numbers and
multiplication of odd numbers ranging between 1 to n. where n is a number entered
by user.
Input: Enter N => 10*/


#include<stdio.h>

void main()  {

	int num,sum=0,mul=1;  	//type of all variable integer.
				//intial value	num=	garbage value
				
				//		sum=0 	if we are not initialize sum variable with 0 then it will take some garbage value.
				//			Garbage value is some random value, it can be -ve, +ve or zero.
				//			so to avoid this we initialize sum=0
				
				//		mul=1  	It is also same as sum but in this we initialiaze mul=1 not to zero 
				//			bcz if we multiply zero with another number it will return zero
				//			eg. mul=0  	mul=mul*num;
				//					mul=0*1 = 0;

	printf("Enter range: ");
	scanf("%d",&num);		//get value from user and stored in variable num.

	int i=1;
	while(i<=num)  {

		if(i%2==0)		// '%' sign always return reminder.
					//here we check the condition for even number
					//if conditon is true the if statment is executed.
			sum=sum+i;
		else			//whene if statement is false else will be executed.
			mul=mul*i;
		i++;
	}
	printf("sum of all even numbers between 1 to %d: %d\n",num,sum);
	printf("multiplication of all odd numbers between 1 to %d: %d\n",num,mul);
}
