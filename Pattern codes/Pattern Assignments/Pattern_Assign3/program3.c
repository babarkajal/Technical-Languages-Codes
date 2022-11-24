#include<stdio.h>

void main(){	
		int a=6;
		char ch='A';
		for(int i=1; i<=5; i++ ){
				for(int j=1; j <=9 ; j++){
						if(j>=a  && i<5)
							break;

						if(i+j >= 6)
							
							printf("%c ",ch++);
							
						else			
							printf("  ");
				}
			a++;
			printf("\n");

		}
}
