#include<stdio.h>

void main(){
		int n;
		printf("Enter the size: ");
		
		scanf("%d",&n);
		float arr[n];
		float mult=1;		
		
		printf("Enter the %d Floating value: ",n);
		for(int i=0 ; i<n ; i++){
				
				scanf("%f",&arr[i]);
				
				if(i%2 != 0)
					mult=mult*arr[i];
					
		
		}
		printf("Multiplication of odd index based elements in array: %f\n",mult);
		
}
