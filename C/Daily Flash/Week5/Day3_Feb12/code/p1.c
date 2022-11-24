/*
Program 1: Write a Program to print series of Deficient Numbers up to nth
element. Where n is number entered by user. 
*/

#include<stdio.h>
#include<malloc.h>

void main() {
	//allocate space of size int and store the address of it to the num
	int* num = (int*)malloc(sizeof(int));
	printf("Enter number to print series of deficient num: ");
	scanf("%d",num);
	int sumOfDiv=0;

	for(int range=1; range <= *num; range++) {
		sumOfDiv = 0;
		for(int div=1; div<= range/2; div++) {
			if(range%div == 0)
				sumOfDiv += div;

		}
		if(sumOfDiv < range)
		       printf("%d  ", range);
	}
	printf("\n");
}	
