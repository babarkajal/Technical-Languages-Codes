/*
Q8
 Write a c program in which ask the user to enter a number from 0 to 5 and print it's spelling,if the entered number is greater than 5 print entered number is greater than 5 (use if else or switch case)

e.g
Input -Enter a number - 4 
Output - four*/


#include<stdio.h>

void main()  {

	int num;

	printf("Enter number: ");
	scanf("%d",&num);

	switch(num)  {

		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		default:
			printf("Number is grater than five\n");
			break;
	}
}
