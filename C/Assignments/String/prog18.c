/*
18.Write a program which accept two strings from user and append N characters of second string after first string(Implement strncat()).   

Input : FirStr SecStr 4   
Output : FirStrSecS   
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

# include <stdio.h>

//concatenate string fun 
char* mystrcat (char*,const char* , int n);


void main() {
	
		char str1[20];
		char str2[20];
		int n;
		
		//accpet firststring
		printf("Enter first string: ");
		scanf("%[^\n]",str1);

		//accpet second string
		printf("Enter first string: ");
		scanf(" %[^\n]",str2);
		
		//accept n number 
		printf("Enter numbers to be concatenated: ");
		scanf("%d",&n);
		
		
		mystrcat(str1,str2,n);
		printf("\nconcatenated = %s\n",str1);
	
}

char* mystrcat(char* str1, const char* str2, int n) {
		
		//travel upto end of first string
		while(*str1 != '\0')
				str1++;
		
	
		//append the second string to first upto n char
		
		int i=0;
		while(i++ < n){
				*str1 = *str2;
				str1++;
				str2++;
		}
		*str1 = '\0';
}
