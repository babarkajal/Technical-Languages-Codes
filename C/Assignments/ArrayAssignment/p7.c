#include<stdio.h>

void main(){
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		char carr[n];
				
		printf("Enter the %d characters: ",n);
		for(int i=0;i<n;i++) {
				scanf(" %c",&carr[i]);
				
				if(carr[i] >=65 && carr[i] <= 90)
							carr[i] = carr[i]+32;
				
				else if(carr[i] >=95 && carr[i]<=122)
							carr[i] -=32;
				
				else
					carr[i]=carr[i];
		}
		printf("TOGGLE CASE: ");
		for(int i=0;i<n;i++)	
				printf("%c",carr[i]);
		printf("\n");

		
}
