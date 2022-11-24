//Accept array from user and print  sum of square of even no by using pointer

#include<stdio.h>

void main(){
		
	int arr[10],min,max;
	printf("Enter 10 elements:\n");
	
	//read
	for(int i=0 ;i<10 ;i++){
		scanf("%d",arr+i);
	}
	
	min=max= *(arr+0);//assigned to the first element
	for(int i=1 ;i<10 ;i++){
		
		if( *(arr+i) < min  ) //find min
			min = *(arr+i);
		if( *(arr+i) > max)  //find max
			max = *(arr+i);
	}
	
	printf("min = %d\n max= %d\n",min,max);
}
