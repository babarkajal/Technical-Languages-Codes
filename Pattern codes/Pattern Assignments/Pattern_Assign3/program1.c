#include<stdio.h>

void main(){	
		int a=5;
		
		for(int i=1,b=1; i<=4; i++,b=1 ){
				for(int j=1; j <=7 ; j++ ){
						if(j>=a  && i<4)
							continue;

						if(i+j >= 5)
							
							printf("%d ",b++);
							
						else			
							printf("  ");
				}
			a++;
			printf("\n");

		}
}
