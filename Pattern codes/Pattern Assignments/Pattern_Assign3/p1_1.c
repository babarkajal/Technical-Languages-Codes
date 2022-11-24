#include<stdio.h>

void main(){	
		int a=5,j;
		for(int i=1; i<=4; i++ ){
				for( j=1; j <=4 ; j++){
						if(i+j >= 5)
							printf("* ");
							
						else			
							printf("  ");
				}
			if(i >=2){
				for(int k=j ;k<=i+3;k++)
					printf("* ");
			}
			
			printf("\n");

		}
}
