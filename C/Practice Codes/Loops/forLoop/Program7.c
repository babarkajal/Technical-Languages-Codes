/*7. Write a program to print multiples of 6 upto 60.
      Ip -> Enter a number - 6
            Enter limit - 60
      Op -> 6 ,12 ,18 , 24,...,60
      */


#include<stdio.h>

void main()   {

	int num,limit;
	printf("Enter number: ");
	//take starting num and limit from user
	scanf("%d",&num);

	printf("Enter limit: ");
	scanf("%d",&limit);

	/*we have to print multiples of num from 1 -limit
		you can use  1-limit range in for loop
		but to avoid iterations we used limt/num l 
	*/
	for(int i=1;i<=limit/num;i++)  {

		printf("%d\n",num*i);
	}

}
