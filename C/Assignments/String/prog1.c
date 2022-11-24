#include <stdio.h>
#include <stdlib.h>

//prototype for fgets
//char* fgets(char*,int,FILE*);

void main() {
	
	char str[30];	
	//Enter the string
	printf("Enter the string: ");
	
	//fgets(pos,size,stream)
	fgets(str,25,stdin);
	//print
	printf("Entered string is: %s\n",str);
	
}
