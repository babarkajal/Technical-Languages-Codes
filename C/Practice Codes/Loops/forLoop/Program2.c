/*2. write a c program to print odd numbers from 20 to 40
 * */


#include<stdio.h>

void main()  {
	//declare two variables to store values taken from user
	int start,end;


	printf("Enter range start and end: ");
	scanf("%d%d",&start,&end);

	printf("Odd numbers from %d to %d:\n",start,end);

	for(int i=start;i<=end;i++)  {
		//odd numbers are the numbers which gives modulas 1 when divide by 2
		if(i%2 ==1)  {

			printf("%d\n",i);
		}
	}
}
