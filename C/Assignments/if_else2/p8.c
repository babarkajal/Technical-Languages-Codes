#include<stdio.h>

void main() {
		int a,b,c,d,e;
		int  mean;
		printf(" Enter 5 integers: ");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		scanf("%d",&d);
		scanf("%d",&e);
		mean=(a+b+c+d+e)/5;

		printf(" Mean = %d\n", mean);

		if(mean > 30)
			printf("%d is  greater than 30.\n ",mean);
		else
			printf("%d is not greater than 30.\n ",mean);

}
