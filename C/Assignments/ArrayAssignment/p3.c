#include<stdio.h>

void main(){
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
		int sumSquare=0;		
		
		printf("Enter the %d integers: ",n);
		for(int i=0 ; i < n ; i++){
				
				scanf("%d",&arr[i]);
				
				if(arr[i]%2==0)
					sumSquare= sumSquare + (arr[i] * arr[i]);
					
		}
		printf("Addition of sqaure of even array elements: %d\n",sumSquare);
		
}
