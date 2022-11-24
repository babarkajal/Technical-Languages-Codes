#include<stdio.h>

void main(){
		char carr[5];

		printf("enter the 5 characters: ");
		for(int i=0;i<5;i++)
		         scanf(" %c",&carr[i]);

		printf("\nVowels from the array:\n");	
		for(int i=0 ; i<5 ; i++){

			if(carr[i]=='a' ||carr[i]=='e' ||carr[i]=='o' ||carr[i]=='i' || carr[i]=='u' )		
					
					printf("%c\n",carr[i]);
		}
}
