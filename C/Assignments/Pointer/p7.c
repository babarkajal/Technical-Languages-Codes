#include<stdio.h>

void main(){
		float arr[10];
		printf("Enter the 10 floating values: \n");
		for(int i=0; i<10 ;i++)
			scanf("%f",&arr[i]);
		
		float *fptr;
		printf("\nElements of array using pointer: \n");
		int i;

		for(i=0,fptr=arr; i<10 ; i++,fptr++)
				printf(" %f\n",*fptr);
		


}
