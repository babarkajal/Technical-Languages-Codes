//Accept array by using ptr and print it

#include<stdio.h>

void main(){
		int a[10];

		int *ptr=a;//ptr point to the array
		
		printf("enter 10 elements: ");
		for(int i=0; i<10 ;i++){
				scanf("%d",ptr+i);
		}

		//print using pointer
		printf("Entered array:\n");
		for(int i=0;i<10;i++){
				printf("%d\t",*(ptr+i)); //derefence operator
		}
		printf("\n");
}
