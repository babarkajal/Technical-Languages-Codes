//Accept array from user and print the sum by using pointer

#include<stdio.h>

void main(){
		
	int arr[10],sum=0;
	printf("Enter 10 elements:\n");
	//read
	for(int i=0 ;i<10 ;i++){
		scanf("%d",arr+i);
		sum +=*(arr+i);
	}
		
	printf("Sum of enetered elements: %d\n",sum);
}
