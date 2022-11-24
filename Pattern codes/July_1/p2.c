#include <stdio.h>

void main(){
	int var;
	for(int i=0; i<=3 ; i++){
		
		var=2*i;
		for(int j=0; j<=3-i; j++){
			
			printf(" %d ",var);
			var +=2;
		}
		printf("\n");
	}
}
