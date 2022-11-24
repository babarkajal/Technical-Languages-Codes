//Accept array from user and print  multiplication of odd index value by using pointer

#include<stdio.h>

void main(){
		
	float arr[10],mult=1;
	printf("Enter 10 elements:\n");
	
	//read
	for(int i=0 ;i<10 ;i++){
		scanf("%f",arr+i);
		
		//odd index values number
		if(i%2==0)
			mult *=(*(arr+i));
	}
		
	printf("Multiplication of odd index values: %f\n",mult);
}
