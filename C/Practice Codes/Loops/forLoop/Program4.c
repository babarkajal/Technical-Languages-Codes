/*4. write a c program to print all divisors of 50
 */


#include<stdio.h>

void main()  {

	//declare a variables to store number
	int num;
	printf("Enter number: ");
	scanf("%d",&num);

	//find all the divisors of that number
	//divisors are those numbers which gives modulas 0 when we take num%divisors
	// here we used condition num/2 because any number has divisor within the range 1 to num/2
	//e.g 12 have divisors 1,2,3,4,6 means upto 12/2 = 6
	for(int i=1;i<=num/2;i++)  {
		//condition to find divisors
		if(num%i==0)  {

			printf("%d\n",i);
		}
	}

}
