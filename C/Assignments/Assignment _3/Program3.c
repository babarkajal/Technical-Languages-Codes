#include<stdio.h>

void main() {
	int value;
	printf("Enter the integer: ");
	scanf("%d",&value);//12
	value=value + (value++ + ++value);
/*           =value +(12 + value)
	     =value +(12+14)
	     =14+26=40
*/
	printf("Value=%d\n",value);

}

/* Suppose we entered the value 12. the bracket() has highest priority therefore it calculated first then the other operations will be performed
*/
