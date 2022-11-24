//print the ans of last and first digit of the number

#include<stdio.h>

void main(){
		int num;
		
		printf("Enter number: ");
		scanf("%d",&num);
		
		int num2;
		int lastDigit=num%10;
		

		while(num > 9){
			num /=10;
		}

		printf("Addition = %d\n\n",lastDigit+num);
}
		
