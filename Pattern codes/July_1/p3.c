#include<stdio.h>

void main(){
	
	char a;
	for(int i=0; i<4; i++){
		a='D'-i;
			for(int j=0; j<=i ;j++){
				printf(" %c ",a);
				a++;
			}
		printf("\n");
	}
}
