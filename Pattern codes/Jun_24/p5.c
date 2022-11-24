/*
A B C D E  
a b c d e
A B C D E  
a b c d e
A B C D E  
*/

#include <stdio.h>

void main(){
	
	int i,j;
	
	for(i=0; i<5; i++){	
		
		for(j=0; j<5; j++){	
			if(i%2 == 0){
				printf(" %c ",j+65);
			}
			else
				printf(" %c ",j+97);
		}
	printf("\n");
	}
}
