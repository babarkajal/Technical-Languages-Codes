/*

24.Write a program which accept string from user and then reverse the string till last N characters without taking another string.   

Input : Hello World  5
   
Output : Hello dlroW    

-------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototypes
int myStrLen(const char*);
char* myStrRev(int ,char*);

void main() {
		
		char str[30],str2[40];
		int n;
		
		//accpet the string upto \n
		printf("Enter the string to be reversed:  ");
		scanf("%[^\n]",str);
	
		//accpet the positive number of characters to be reversed
		do {
			printf("\nEnter the number of characters to be reversed: ");
			scanf("%d",&n);
		}while(n < 0);
		
		
		myStrRev(n,str);
		printf("\nReversed String is ='%s'\n",str);
}


//length function
int mystrlen(char* str){
		
		int count = 0;
		
		while( *str++ != '\0')
			count++;
	
		return count;
}

//reverse the n characters
char* myStrRev(int n,char* str){
			
		
		//get the length
		int len = mystrlen(str) , i = 0 ,lastChar;
			
		//Jump to the starting of characters
		lastChar = len-n;
/*
suppose the string is 'Hello world' then reverse the n last characters
for that consider 
		n = 5

		 0 1 2 3 4 5 6 7 8 9 10 11
		 H e l l o   w o r l d  \0
		
		length = 11
		lastchar = len - 5 = 11 - 5 = 6
		
		6 = 'w' 
		which is a 5th last char of the string and then reverse the string from this character

*/	
			

		
		// to store the char
		char temp;		

		//reverse the content upto n char
		while(i < n/2 ){
			
			//store char in temp
			temp = *(str + lastChar);
			
			//swap the position
			*(str + lastChar) = *(str + (len-i-1));
			
			//then again store temp into last pos
			*(str+ (len-i-1)) = temp;
			lastChar++;
			i++;
/*This logic actually  work as---------

string ='Hello world'
now lastChar = 6 =>'w'

 i	i < n/2=(2)	temp	*(str + lastChar)	*(str +(len-i-1))	lastChar++	
 
 0	0 < 2		'w'		'd'		*(str+10)='w'			7
 1 	1 < 2		'o'		'l'		*(str+9)='o'			8
 2	2 < 2						
	exit

str = 'Hello dlrow'
*/
		}
}
				
				
				
