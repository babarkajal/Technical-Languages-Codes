#include <stdio.h>

static void fun();
void gun();
	
void main(){
		extern int a;
		extern int b;
		extern int c;
		printf("a = %d\n",a);
		printf("b = %d\n",b);
		fun();
}

int a=10;//file scope	

static void fun(){//internal linkage
		printf("c = %d\n",c);
		gun();
}
