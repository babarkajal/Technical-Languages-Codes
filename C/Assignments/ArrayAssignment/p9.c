#include<stdio.h>

void main(){
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
				
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++)
				scanf("%d",&arr[i]);
		
		printf("Reversed: ");
		for(int i=n-1; i>=0 ;i--)
				printf("\t%d",arr[i]);

		printf("\n");
}
