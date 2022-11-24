#include<stdio.h>

void main(){
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n];
		int max,min,flag=1;
		
		printf("Enter the %d integers: ",n);
		for(int i=0 ; i < n ; i++,flag=0){
				
				scanf("%d",&arr[i]);
				if(flag==1)
				        min=max=arr[0];
				 
				
		                if(arr[i] < min)
					min = arr[i];
				else if(arr[i] > max)
					max= arr[i];
					
								
		}
		printf("smallest number: %d\n",min);
		printf("Largest number: %d\n",max);
		
}
