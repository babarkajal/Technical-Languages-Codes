/*
25.Write a program which accept string from user and then accept range and reverse the string in that range without taking another string.   

Input : Hello World 3 8   
Output : HeoW ollrld   

-------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototypes
int myStrLen(const char*);
char* myStrRev(char* , int, int);

void main() {
		
		char str[30],str2[40];
		int start,end;
		
		//accpet the string upto \n
		printf("Enter the string to be reversed:  ");
		scanf("%[^\n]",str);
	
		//accpet the positive number of characters to be reversed
		do {
			printf("\nEnter the limit of characters to be reversed\n ");
			printf("Enter start: ");
			scanf("%d",&start);

			printf("Enter end: ");
			scanf("%d",&end);

		}while(start < 0 || end < 0);
		
		//call the function	
		myStrRev(str,start,end);
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

char* myStrRev(char* str , int start ,int end){
			
		
		//get the length
		int len = mystrlen(str) , i = 0 ,mid;
		
		// to store the char
		char temp;		
		
		//sub 1 from pos bcoz string starts from 0 to len - 1
		start -= 1;
		end -= 1;
		
		//calculate mid
		mid = (start+end)/2;
		
/*
suppose the string is 'Hello world' then reverse the charcters between  limit
start = 3
end = 8 

for that consider 
		
		 0 1 2 3 4 5 6 7 8 9 10 11
		 H e l l o   w o r l d  \0
		
		start = start - 1 = 3-1
		      = 2 (index)
		end = end - 1 = 8-1
		    = 7(index)
		
		mid = (2 + 7)/2 = 9 / 2
		    = 4
			
*/	
			

		//reverse the content upto n char
		while(start <= mid ){
			
			//store char in temp
			temp = *(str + start);
			
			//swap the position
			*(str + start) = *(str + (end-i));
			
			//then again store temp into last pos
			*(str+ (end-i)) = temp;
			start++;
			i++;
		}
/*This logic actually  work as---------

string ='Hello world'
		 0 1 2 3 4 5 6 7 8 9 10 11
		 H e l l o   w o r l d  \0
start=2,end=7
mid=4

 i	i <= 4		temp	*(str + start)		*(str +(end-i))		start++	
 
 0	0 <= 4		'l'		'o'		*(str+7)='l'		 3
 1 	1 <= 4		'l'		'w'		*(str+6)='l'		 4
 2	2 <= 4		'o'		' '		*(str+5)='o'		 5
 3	3 <= 4		' '		'o'		*(str+4)=' '		 6
 4	4 <= 4		'w'		'l'		*(str+3)='w'		 7
 5	5 <= 4		
	exit


str = 'Heow ollrld'
*/
}

				
				
				
