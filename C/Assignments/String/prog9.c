/*
9.Write a program which accept sentence from user and position from user and print the word at that position.   

Input : is my he she 3  
Output : he  
---------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

void main() {
	
		char str[40];		//to store the string
		char *cptr = str;	// will point to the array
		int pos;
		
		printf("Enter the string: ");
		scanf("%[^\n]",str);	//take ip upto \n
		
		printf("\nEnter the position of word which you want to print: ");
		scanf("%d", &pos);
		int count = 1;		//for counting the word
		
		printf("\nThe word on %d postion: ",pos);
		while ( *cptr != '\0'){
				
			if(count == pos)
				printf("%c",*cptr);
			
			if( *cptr == ' ')
				count++;	//inc count when space occured
			
			cptr++;			//inc the pointer
		}
		printf("\n");
}
		
			
