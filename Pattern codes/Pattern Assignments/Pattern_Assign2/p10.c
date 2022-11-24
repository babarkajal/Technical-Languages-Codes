#include<stdio.h>

void main(){
		int a=1;
		for(int i=1 ; i<=4 ; i++){
				for( int j=1 ; j<=4 ;j++){
				
							if( j >= i)
								printf("%d ",a++);
							
							else 
								printf("  ");
			
					
					
				}
			
			a=1;
			printf("\n");
		}
}
					



















