/*

23.Write a program which accept string from user and then reverse the string till first N characters without taking another string.   

Input : Hello World  5   
Output : olleH World    

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
			printf("\nEnter the number of characters:");
			scanf("%d",&n);
		}while(n < 0);
		
		
		myStrRev(n,str);
		printf("\nReversed String is ='%s'\n",str);
}


//reverse the n characters
char* myStrRev(int n,char* str){
			

		int i = 0;

		// to store the char
		char temp;		

		//reverse the content upto n char
		while(i < n/2){
			
			//store char in temp
			temp = *(str + i );
			
			//swap the position
			*(str + i) = *(str + (n-i-1));
			
			//then again store temp into last pos
			*(str+ (n-i-1)) = temp;
			i++;
		}
}
				
				
				
