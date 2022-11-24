#include<stdio.h>

void main(){	
		int a=5;
		for(int i=1; i<=4; i++ ){
				for(int j=1; j <=7 ; j++){
						if(j>=a  && i<4)
							continue;

						if(i+j >= 5)
							
							printf("* ");
							
						else			
							printf("  ");
				}
			a++;
			printf("\n");

		}
}
