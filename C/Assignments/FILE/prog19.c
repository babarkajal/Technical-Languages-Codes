/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 19: Write a program in C to search a word in a file. take the word from the user to be searched and print success if word is
            found else failure.
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *str){
		int count=0;
		while( *str != '\0'){
				count++;
				str++;
		}
		return count;
}

//campare two strings without considering its case 	
int mystrcasecmp(char *str1,char *str2){
	
	
		if(mystrlen(str1) != mystrlen(str2))
			return -1;

		else{
			while( *str1 != '\0'){
				if(*str1 == *str2 || *str1 - *str2 == -32 || *str1-*str2 == 32){
					str1++;
					str2++;
			}
			else
				return (*str1-*str2);
		}
	}
}
	

void main(){
	FILE *fp=fopen("kajal.txt","r");
	char word[20]={};	//to take i/p from user
	char str[20];	//for accessing the words from the user
	int status;
	
	//take word from user
	printf("Enter the word which you want to search:  ");
	gets(word);
		
	if(fp == NULL){
			printf("Unable to open the file\n");
			exit(1);
	}

	else{
			while( fscanf(fp , "%s" , str)	> 0){	//fscanf access the contents from the file and store it into str 
			//		printf("%s\n",str);
			
				 	status=mystrcasecmp(word,str);	//comapre words
					if(status == 0){
						printf("The word is present in the file\n\n");
						break;
					}
			}
			if(status != 0)
					printf("The word is not present in the file\n\n");
	}
}

			

