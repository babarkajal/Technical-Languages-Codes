/*
 15.Write a program which accept string from user and accept number N then copy last N character into some another string.   

Input : India is my 5   
Output : is my
------------------------------------------------------------------------------------------------------------------------------------------------------------------------ 
*/

#include <stdio.h>

//prototype of copy fun
char* myStrNCpy( char * ,const char*, int n);

// prototypelen fun
int mystrlen(char*);

void main() {
	
	char src[20];
	char dest[20];
	int n;	

	//accpet string upto \n
	printf("Enter the string to be copied: ");
	scanf("%[^\n]",src);
	
	//accpet num of char
	printf("Enter the number of words to be copyied: ");
	scanf("%d",&n);
	
	//first calculate the length of source string
	int len = mystrlen(src);

	//then sub the n from length
	int lastN = len - n ;
	
	//call the copy function
	myStrNCpy(dest , src, lastN);
	printf("\ncopied last %d charcters : %s\n",n,dest);	
}

//
char* myStrNCpy(char * dest , const char * src, int lastN) {

	//to reach the pos 	
	src = (src + lastN);
	
	//copy src to dest 
	while(*src != '\0'){
		
		*dest = *src;
		dest++;
		src++;
	}
	*dest= '\0';
	return dest;	
}


//calculate len 
int mystrlen(char *str){
	
	int count = 0;
	while( *str++ != '\0')
		count++;
	return count++;
}

