//print the string by  puts() function 

#include <stdio.h>
//Prototype of puts() 
int puts(const char*);

void main(){
	char str[10]="Reader!!";
	char *ptr="Dear";
	
	//puts  provide next line char implicitly
	puts("Strings by using puts() function");
	puts("Hello");
	puts(ptr);
	puts(str);
}

