//Addresses of union  

#include<stdio.h>

union varible {
		
		int a;
		char b;
		float c;
		
};


void main(){
		union varible var={34,'K',12.3};//object	
		printf("%d\t %c\t %f\n",var.a, var.b ,var.c);	
}
