/*
A B C D E  
a b c d e
F G H I J
f g h i j
 K L M N O
*/

#include <stdio.h>

void main(){
	
	int i,j;
	char a='A',b='a';	
	for(i=0; i<5; i++){	
		
		for(j=0; j<5; j++){	
			if(i%2 == 0){
				printf(" %c ",a++);
			}
			else
				printf(" %c ",b++);
		}
	printf("\n");
	}
}
