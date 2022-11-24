#include <stdio.h>

//declare
struct kajal{
	
	int number;
	char name[20];
}k1={10,"kajal"} ,k2;//objects k1 assiign 10 to the number and kajal to the name



void main(){

	printf("number= %d,name=%s\n\n",k1.number,k1.name);//dot operator
	printf("number= %d,name=%s\n\n",k2.number,k2.name);//empty

	//copy operation is valid 
	k2=k1;
	
	printf("number= %d,name=%s\n\n",k2.number,k2.name);

	if(k1==k2)//error:invalid operand to the binary ==
		printf("Same Structure\n");
}

