#include<stdio.h>

void main(){
		//varible defination
		int a=10;
		float b=20.20;
		char c='A';
		double d=13.34;
		
		//pointers
		int *iptr=&a;
		float  *fptr=&b;
		char *cptr=&c;
		double *dptr=&d;

		//print address of varible and pointer

		printf("Address of varible: \n");
		printf("%p\n",&a);
		printf("%p\n",&b);
		printf("%p\n",&c);
		printf("%p\n",&d);
		
		printf("\nAddress of pointers: \n");
		printf("%p\n",&iptr);
		printf("%p\n",&fptr);
		printf("%p\n",&cptr);
		printf("%p\n",&dptr);

		//derefencing the pointers
		printf("Derefencing the pointers: \n");
		printf("a=%d\n",*iptr);
		printf("b=%f\n",*fptr);
		printf("c=%c\n",*cptr);
		printf("d=%lf\n",*dptr);

}
