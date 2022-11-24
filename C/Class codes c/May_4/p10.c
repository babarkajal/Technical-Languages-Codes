//print the string by fputs() function 

#include <stdio.h>

void main(){
	char str[10]="Reader!!";
	char *ptr="Dear";
	
	//fputs  does not provide next line char implicitly
	fputs("Strings by using fputs() function\n" , stdout);
	fputs("Hello\n",stdout);
	fputs(ptr,stdout);
	fputs(str,stdout);
}

