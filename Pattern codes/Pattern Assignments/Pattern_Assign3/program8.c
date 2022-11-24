#include<stdio.h>

void main(){
		for(int i=1; i<=8; i++){
	
			if(i <= 4){
				for(int j=1;j<=4;j++){
						if(i==j)
							printf("* ");
			
						else if(j < i)
							printf("--");
				}
			}
			if( i > 4) {
				
				for(int j=1 ;j<=4; j++) {
						if(i+j==9)
							printf("* ");
						else if(i+j < 10)
							printf("--");
				}
			}
			printf("\n");
		}
}
