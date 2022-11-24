/*10. Write a program to print all the numbers that can divide 65.
       Ip -> 65*/


#include<stdio.h>

void main()  {

	int num;
	printf("Enter number: ");
	scanf("%d",&num);

	for(int i=1;i<=num/2;i++)  {

		if(num%i==0)  {

			printf("%d\n",i);
		}
	}

}
