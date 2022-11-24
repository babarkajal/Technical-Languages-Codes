//compare two strings

#include<stdio.h>

//prototype
char* gets(const char*);
int mystrcmp(const char* ,const char*);


void main(){
	char str1[20],str2[20];
	
	printf("Enter first string: ");
	gets(str1);

	printf("Enter second string: ");
	gets(str2);
	
	int i=mystrcmp(str1,str2);
	
	if(i==-1)
		printf("string length not matche\n\n");
	else if(i==0)
		printf("strings are same\n\n");
	else
		printf("strings are not same\n\n");
}

int mystrlen(const  char* str){

        int count=0;
        while( *str != '\0'){
                count++;
                str++;
        }

        return count;

}


int mystrcmp(const char* str1,const char *str2) {
	
		int strlen1 = mystrlen(str1);
		int strlen2 = mystrlen(str2);
		
		if(strlen1 != strlen2)	
			return -1;
		else{
			while( *str1 != '\0'){

				if(*str1 == *str2){
					str1++;
					str2++;
				}
				else{
					//return ascii diff	
					return (*str1 - *str2);	
				}
			}
			
		}
	return 0;
}	
