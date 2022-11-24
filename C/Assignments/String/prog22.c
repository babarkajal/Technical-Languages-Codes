/*
22.Write a program which accept string from user and then reverse the string without taking another string (Implement strrev()).   

	

	Input : Hello World   Output : dlroW olleH  

-------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototypes
int myStrLen(const char*);
char* myStrRev(char*);

void main() {
		
		char str[30];
		
		//accpet the string upto \n
		printf("Enter the string to be reversed:  ");
		scanf("%[^\n]",str);
		
			
		myStrRev(str);
		printf("Reversed String is = %s\n",str);
}


//for length 
int myStrLen(const char* str){
			
		int count = 0;
		//travel upto end and calculate the length
		while(*str++ != '\0')
			count++;

		return count;
}	

//for reverse
char* myStrRev(char* str){
		
		
		//calculate the length
		int len = myStrLen(str);
		
		// to store the char
		char temp;		
		int i = 0;

		//reverse the content	
		while(i < len/2){
			//store first char upto half len of string
			temp = *(str + i );
			
			//swap the position
			*(str + i) = *(str + (len-i-1));
			
			//then again store temp into last part
			*(str+ (len-i-1)) = temp;
			i++;
		
		}
}
				
				
				
