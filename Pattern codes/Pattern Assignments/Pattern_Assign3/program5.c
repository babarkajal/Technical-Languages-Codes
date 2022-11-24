#include<stdio.h>

void main(){	
		int a=5;
		char carr[]={'A','W','E', 'S' ,'O','M','E'};

		for(int i=1,b=0 ; i<=4; i++,b=0 ){
				for(int j=1; j <=7 ; j++ , b++){
						if(j>=a  && i<4)
							continue;

						if(i+j >= 5)
							
							printf("%C ",carr[b]);
							
						else			
							printf("  ");
				}
			a++;
			printf("\n");

		}
}
