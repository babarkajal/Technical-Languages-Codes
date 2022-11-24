#include<stdio.h>

void main(){
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
				
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++)
				scanf("%d",&arr[i]);
		
		printf("Array elements are: ");
		for(int i=0;i<n;i++)
				printf("\t%d",arr[i]);

		printf("\n");
}
