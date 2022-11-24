/*
 *
Program 5: Write a Program that prints series of perfect numbers up to the
entered limiting number.
Input: 100
Output: The Series of all perfect number from 1 to 10 is
1, 6, 28
*
*/
#include <stdio.h>

void main() {
	int num,temp,sum;
       	do {	
		printf("Enter limit: ");
		scanf("%d",&num);
		if(num<=0) 
			printf("ENter non-negative or non-zero num\n");
	}while(num<=0);	

	printf("Series of perfect num from 1 to %d\n",num);
	for(int lc=1; lc<=num; lc++) {
		sum=0;
		for(int div=1; div <=lc/2; div++) {
			if(lc%div==0)
				sum +=div;
			
		}
		if(sum==lc)
			printf("%d ",lc);

	}
	printf("\n");

}
