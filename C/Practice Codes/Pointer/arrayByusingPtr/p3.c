//Accept array from user and print  sum of square of even no by using pointer

#include<stdio.h>

void main(){
		
	int arr[10],sumSqr=0;
	printf("Enter 10 elements:\n");
	
	//read
	for(int i=0 ;i<10 ;i++){
		scanf("%d",arr+i);
		
		//even number
		if(*(arr+i)%2==0)
			sumSqr +=(*(arr+i)) * (*(arr+i));
	}
		
	printf("Sum of square of elements: %d\n",sumSqr);
}
