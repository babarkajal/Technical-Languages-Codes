//function with input and one output

#include <stdio.h>

float area(int);

void main(){
	int rad;
	printf("Enter radius: \n");
	scanf("%d",&rad);
	
	float a=area(rad);
	printf("\nArea of Circle: %f\n",a);
}

float area(int rad){
	return rad*rad*3.14;
}
