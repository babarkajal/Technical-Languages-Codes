//size of union
#include<stdio.h>
union varible{
	int a;
	char b;
	char c[30];
};


void main(){
	union varible var;
	printf("Size of union =%d\n",sizeof(var));
}	
