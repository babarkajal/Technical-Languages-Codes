/*

8.Write a program which accept sentence from user and print last word from that sentence.   
Input : In my company 
Output : company   
---------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int mystrlen(char*);

void main() {
	
		char str[50];	//for storing the string
		char temp[10];
		int i;
		
		//accpet from user
		printf("Enter the string: ");
		//accpet upto '\n'
		scanf("%[^\n]",str);
		
		//for length
		int length = mystrlen(str);	
		
		
		//accessing last characters from the array
		for ( i=0 ; str[i] != '\0' ; i++){
			
			temp[i]=str[length-i-1];	

			if(str[length-i-1] == ' ')
				break;
		}
		//insert end '\0' 
		temp[i]='\0';
		
		//calculate length of last word;
		length = mystrlen(temp);
	
		//reverse the last word stored in an array
		printf("Last word of the sentence: ");
		for(int i=0 ; temp[i] != '\0' ; i++){
			
			printf("%c",temp[length-i-1]);
		}
			
		printf("\n");
}

//function to calculate the length
int mystrlen(char *str){
		
		int count = 0;
		while( *str != '\0'){				
			count++;
			str++;
		}
	        return count;
}
