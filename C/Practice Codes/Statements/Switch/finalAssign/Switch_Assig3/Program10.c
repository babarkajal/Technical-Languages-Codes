/*Q10 
Write a program in c in which user should enter two numbers if both the numbers are positive multiply them and provide to switch case to verify number is even or odd, if user enters any negative number program should terminate saying “Sorry negative numbers not allowed”
*/


#include<stdio.h>

void main()  {

	int num1,num2;

	printf("Enter 2 numbers: ");
	scanf("%d%d",&num1,&num2);

	if(num1>0 && num2>0)  {
	
		int mul=num1*num2;

		switch(mul%2)  {
			
			case 0:
				printf("%d is Even number\n",mul);
				break;
			case 1:
				printf("%d is Odd number\n",mul);
				break;
		}
	
	}
	else  {
		printf("Sorry negative numbers not allowed\n");
	}
}
