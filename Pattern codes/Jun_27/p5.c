#include<stdio.h>

void main(){
	int n,num;
	printf("Enter number of rows: ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		
		for(int j=1; j<=n ;j++){
			
			if(i==j || i+j== n+1){	
				printf("\033[34m%d",i);
			}
			else
				printf(" ");
		}
		
		printf("\n");
	}
}
