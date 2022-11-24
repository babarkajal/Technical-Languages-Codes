/*
12345
51234
45123
34512
*/

#include <stdio.h>

void main(){
	
	int var1=1;
	for(int i=0; i<5; i++){
		int var2 = 6-i,var1=1;
		 	
		for(int j=0; j<5; j++){
			
			if(j < i)
				printf(" %d ",var2++);
			else
				printf(" %d ",var1++);
		}
		printf("\n");
	}
}
				
				

