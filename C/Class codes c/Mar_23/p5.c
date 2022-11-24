#include<stdio.h>

void main(){
		char carr[5];

		printf("enter the 5 characters: ");
		for(int i=0;i<5;i++)
		         scanf(" %c",&carr[i]);
		printf("Array---------:\n");	
		for(int i=0 ; i<5 ; i++)
			printf("%d %c\n",i,carr[i]);
}
