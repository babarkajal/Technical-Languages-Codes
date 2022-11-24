/*
26.Write a program which accept string from user and reverse words from that string.   

Input : Hello World   
Output : olleH dlroW   
---------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototypes
int myStrLen(const char*);
char* myStrRev(char*);

void main() {
		
		char str[30],str2[40];
		int start,end;
		
		//accpet the string upto \n
		printf("Enter the string to be reversed:  ");
		scanf("%[^\n]",str);
	


		//call the function	
		myStrRev(str);
		printf("\nReversed String is ='%s'\n",str);
}


//length function
int mystrlen(char* str){
		
		int count = 0;
		
		while( *str++ != '\0')
			count++;
	
		return count;
}


void fun(char *str ,int pos){
		
		char temp;
		printf("%s",str);
		printf("%d\n",pos);
		int i = 0;
		while(i < pos/2) {
				
				temp = *(str+i);
				*(str + i) = *(str + (pos - i - 1));
				*(str + (pos - i -1)) = temp;
				
				i++;			//increment i
				
		}
				

}


//reverse the words

char* myStrRev(char* str){
		
		int pos = 1,i=0;
		 while( *(str+i) !='\0'){
				
				if(*(str+i) ==' '){
					fun(str ,i);
					
				i++;
		}
		
		
		}
}	
					
					
