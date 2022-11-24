/*1. write a c program to print a table of 3 take input from user
	i/p = 3
	o/p = 3 6 9 12 18 21 24 27 30
	*/


#include<stdio.h>

void main()  {

	//type: int
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);		//get value from user.

	//traverse from 1 - 10
	for(int i=1;i<=10;i++)  {

		printf("%d\n",num*i);

		//or else you can use this logic
		//take another variable to store the multiplication
		//int mul=num*i;
		//printf("%d\n",mul);
	}
}
