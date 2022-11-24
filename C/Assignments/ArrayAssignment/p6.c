#include<stdio.h>

void main(){
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		int arr[n],count=0,i,mod,div;
				
		printf("Enter the %d integers: ",n);
		for(int i=0;i<n;i++)
				scanf("%d",&arr[i]);
		
		printf("Array elements are: ");
		
		for(int i=0;i<n;i++){
				for(div=arr[i]; div!=0;div /=10){					
						mod = div%10;
						if(mod == 1)
						count++;
				}
		}
				
		printf("occurance of 1's in array: %d\n",count);		

}
