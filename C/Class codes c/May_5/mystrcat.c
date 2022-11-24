//compare two strings

#include<stdio.h>

//prototype
char* gets(const char*);
char* mystrcat( char* ,const char*);


void main(){
	char str1[20],str2[20];
	
	printf("Enter first string: ");
	gets(str1);

	printf("Enter second string: ");
	gets(str2);
	
	mystrcat(str1,str2);
	
	printf("concatenated string: %s\n\n",str1);
}

int mystrlen(const  char* str){

        int count=0;
        while( *str != '\0'){
                count++;
                str++;
        }

        return count;

}

char* mystrcat(char* str1,const char *str2) {
	
		int strlen1 = mystrlen(str1);
		
		//reach at last location of first string
		str1 =str1+strlen1;
		
		

		while( *str2 != '\0'){
				
			*str1=*str2;
			str1++;
			str2++;	
		}
		*str1='\0';
		return str1;
			
}
