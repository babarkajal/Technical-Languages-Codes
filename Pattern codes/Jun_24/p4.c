/*
1 2 3 4 5 
1 1 1 1 1
1 2 3 4 5 
3 3 3 3 3 
1 2 3 4 5 
*/

#include <stdio.h>

void main(){
	
	int i,j;
	
	for(i=0; i<5; i++){	
		
		for(j=0; j<5; j++){	
			if(i%2 != 0){
				printf(" %d ",i);
			}
			else
				printf(" %d ",j+1);
		}
	printf("\n");
	}
}
