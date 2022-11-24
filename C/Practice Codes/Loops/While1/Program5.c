/*Program 5. Write a program to print the count of even numbers which are divisible
by 5 from 1 to 50 .
Output: 10 ,20 ,30 ,40 ,50*/


#include<stdio.h>

void main()  {

	int count=0, i=1; 	//type integer
				//initial value count=0 and i=1.

	while(i<=50)  {		//condition false whene i become 51
	//for(int i=1;i<=50;i++)  {

		if(i%5==0 && i%2==0 )  {	//if statment execute whene i is divisible by 5 as well as divisible by 2.(reminder=0)

			printf("%d ",i);
			count++;
		}
		i++;
	}
	printf("\nCount = %d\n",count);

}
