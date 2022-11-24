/*
0 1 2 3 
1 2 3 4  
2 3 4 5 
3 4 5 6
*/

#include<stdio.h>

void main(){
	int i,j;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf(" %d ",i+j);
		}
		printf("\n");
	}
}

