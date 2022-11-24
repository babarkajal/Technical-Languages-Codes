//pointer to an array

#include<stdio.h>

void main(){
	
	int a=10;
	int *ptr1=&a;
	int **ptr2=&ptr1;
	int ***ptr3=&ptr2;
	int ****ptr4=&ptr3;
	
	printf("\na=%d\n",a);
	printf("ptr1=%d\n",*ptr1);
	printf("ptr2=%d\n",**ptr2);
	printf("ptr3=%d\n",***ptr3);
}
	
