//Accept array from user and print the occurance of 1's

#include<stdio.h>

void main(){
		
	int arr[10],sumSqr=0;
	printf("Enter 10 elements:\n");
	
	//read
	for(int i=0 ;i<10 ;i++){
		
		scanf("%d",arr+i);
		
	}
	int div,count=0,mod;

	for(int i=0 ; i<10 ;i++){
		
		for(div= *(arr+i) ; div !=0 ; div /=10 ){	
			
			mod=div%10;
			if(mod==1)
				count++;//inc counter when 1 found
		}
		
		
	}
		
		
	printf("count of ones: %d\n",count);
}
