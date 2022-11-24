//sise of union  

#include<stdio.h>

union varible {
		
		char a;
		int b;
		float c;
		double d;
		
};


void main(){
		union varible var;//object	
		printf("Size of union %d bytes\n",sizeof(var));
}
