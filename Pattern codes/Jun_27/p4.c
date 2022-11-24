#include<stdio.h>

void main(){
	int n,num;
	printf("Enter number of rows: ");
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		
		for(int j=0; j<n ;j++){
			
			if(j>=i){	
				printf("\033[31m%d ",n-i);
			}
			else
				printf(" ");
		}
		
		printf("\n");
	}
}
