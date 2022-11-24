#include<stdio.h>

void main(){
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
		int sum=0;
		
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++){
				scanf("%d",&arr[i]);
				sum +=arr[i];
		}
		printf("Addition of all array elements: %d\n",sum);
}
		
	         
