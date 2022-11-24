/*
--------------------------------------------------------------------------------------------------------------------------------------

2.Write a program which accepts a string from user which contains a characters from b to y.   


Input : mn jn kn kazfd  
Output : mn jn k 
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

void main() {

	char str[30],*ptr = str;
	
	//accpet the string
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	
	printf("\nFinal Output:\n");
	while(*ptr != '\0'){

		if(*ptr == 'a' || *ptr =='z') 
			break;	//if a or z found then break the loop
		
		printf("%c",*ptr);
		ptr++;		//in str
	}
	printf("\n");

}
