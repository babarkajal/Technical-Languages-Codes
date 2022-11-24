#include<stdio.h>

void main(){
		int a;
		int *iptr=&a;
		printf("Enter the value for the varible by using pointer: ");
		scanf("%d",&(*iptr));

		printf("value of varible: %d\n",a);
		printf("value of varible dereferecing pointers: %d\n",*iptr);
}
