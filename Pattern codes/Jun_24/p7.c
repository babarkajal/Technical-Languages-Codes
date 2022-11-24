/*
5 1 5 1 5
4 2 4 2 4
3 3 3 3 3
2 4 2 4 2
1 5 1 5 1
*/

#include<stdio.h>

void main(){
	int i,j;
	int a=5,b=1;
	
	for(i=0; i<5; i++){
	
		for(j=0; j<5; j++){
			
			if(j%2==0)
				printf(" %d ",a);
			else
				printf(" %d ",b);
		}
		a--,b++;
		printf("\n");
	}
}

