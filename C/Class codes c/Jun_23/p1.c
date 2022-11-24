//initilization of union members

#include<stdio.h>

union varible{
	char a;
	int b;
};

void main(){
	union varible var={'A'};	
	printf("Value of second member= %c\n",var.a);//A
	printf("Value of second member= %d\n",var.b);//65
	
	var.b=300; //overrides the previous value
	printf("Value of second member= %c\n",var.a);//300
	printf("Value of second member= %d\n",var.b);//,
	
	var.a='A';
	printf("Value of second member= %c\n",var.a);//A
	printf("Value of second member= %d\n",var.b);//321
}

