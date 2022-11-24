//Multiple defination in differnt scope
#include <stdio.h>

extern int a;
void main(){

	extern int a;
	printf("This is not allowed in c\n");
}
