#include<stdio.h>

void main(){
		int arr[10];
		printf("Enter the 10 integers: \n");
		for(int i=0;i<10;i++)
			scanf("%d",&arr[i]);
		
		printf("\nElements \t Address\n");
		for(int i=0 ; i<10 ; i++)
				printf("%d. %d\t\t%p\n",i+1, arr[i],&arr[i]);

}
