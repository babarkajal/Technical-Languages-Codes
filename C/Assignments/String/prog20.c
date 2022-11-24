/*
20.Write a program which accept two strings from user and compare only first N characters of two strings. If both strings are equal till first N characters then return 0 otherwise return difference between first mismatch character (Implement strncmp()).   

Input : FirStr FirNew 3   
Output : Both strings are equal.   
----------------------------------------------------------------------
*/

#include <stdio.h>

//comapre two strings upto N char
int myStrNCmp(const char* ,const char* , int n);


void main() {
	
		char str1[20];	
		char str2[20];	
		int n;	
			
		//accept two strings
		printf("Enter first strings: ");
		scanf("%[^\n]",str1);
		
		printf("Enter second strings: ");
		scanf(" %[^\n]",str2);
			
		//accept N char 
		printf("Enter the N char to be comapared: ");
		scanf("%d",&n);
		
		//call the function
		int diff = myStrNCmp(str1,str2,n);
		
		if (diff == 0)
			printf("Stirng are same\n");	
		else
			printf("The string is differed by %d (ASCI value)\n",diff);

}

//function to campare string
int myStrNCmp(const char* str1, const char* str2 , int n) {
		
			int i = 0;	
			while(i++ < n){
				
				if( *str1 > *str2) 
					return *str1 - *str2;	//return their diff  
				
				else if(*str1 < *str2)
					return *str2 - *str1;
				
				else
					str1++;
					str2++;
			}
		return 0;
}

