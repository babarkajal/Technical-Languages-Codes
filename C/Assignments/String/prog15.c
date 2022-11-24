/*
 15.Write a program which accept string from user and copy first N charaters into some destination string (Implement strncpy()).   


Input : India is my 8   
Output : India is   


*/

#include <stdio.h>

//prototype of copy fun
char* myStrNCpy( char * ,const char*, int n);

void main() {
	
	char src[20];
	char dest[20];
	int n;	

	//accpet string upto \n
	printf("Enter the string to be copied: ");
	scanf("%[^\n]",src);
	
	printf("Enter the number of words for copy: ");
	scanf("%d",&n);

	//call the copy function
	myStrNCpy(dest , src, n);
	printf("\nCopied string : %s\n",dest);	
}

char* myStrNCpy(char * dest , const char * src, int n) {

	int i=0 ;
	while(i++ < n){
		
		*dest = *src;
		dest++;
		src++;
	}
	*dest= '\0';
	return dest;	
}

