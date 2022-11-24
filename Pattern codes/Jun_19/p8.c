#include<stdio.h>

void main(){
		int num;
		
		printf("Enter number: ");
		scanf("%d",&num);
		
		
		int count=0;
		while(num != 0){
			num /=10;
			count++;
		}
		printf("Count of digits : %d" ,count);
		printf("\n\n");
}
		
