#include<stdio.h>

void main(){
		int arr[10];
		printf("Enter the 10 integer values: \n");
		
		int *iptr=arr;

		for(int i=0; i<10 ;i++,iptr++)
			scanf("%d",&(*iptr));
		
		printf("\nElements of array: \n");
	

		for(int i=0; i<10 ; i++)
				printf(" %d\n",arr[i]);
		


}
