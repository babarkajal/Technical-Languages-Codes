#include<stdio.h>


void main() {
		long a=10;
		double  b=20.5;
		int c;
		float d;
		printf("enter the value for a: ");
		scanf("%d",&a);
		printf("enter the value for b: ");
		scanf("%f",&b);
		printf("a= %d\n",a);
		printf("b= %f\n",b);
		c=a+b;//40.0 + 15.5=int(55.500000) 
	        d=a+b;//40.0 + 15.5=55.500000

		printf("c= %d\n",c);//warning =format %d require a int type
		printf("d= %f\n",d);



}
