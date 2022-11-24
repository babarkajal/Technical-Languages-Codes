//Accessing using pointer selection notation ptr->x

#include <stdio.h>

//declare
struct kajal{
	
	int number;
	char name[20];
}*ptr;



void main(){
	struct kajal K={10,'K'};//object creation


	//assign object to the pointer 
	ptr = &K;

	//access using selection notation
	printf("Name= %s \t number= %d\n\n",ptr->name , ptr->number);
	

}

