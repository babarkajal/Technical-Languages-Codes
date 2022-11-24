/*Program 2. Write a C program to count number of digits in a number.
{Hint: performing modulus operation by 10 on the number gives us the last digit from
that number}
*/


#include<stdio.h>

void main()  {

	int num; 	//type integer
			//initial value garbage.
			//used to store some integer number.

	printf("Enter number: ");
	scanf("%d",&num);	//get value from user and stored in num variable.

	int count=0;	//type integer
			//intialize to 0
			//used to stored the count of digits.
	
	int temp = num;	
	while(num!=0)  {	//condition false when num=0.

		//int rem=num%10;	// '%' sign always return reminder.	
		num=num/10;		// '/' sign always return quotient.
		count++;
	}
	printf("The count of digits in %d : %d\n",temp,count);

}
