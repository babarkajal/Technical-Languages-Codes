//print last anf first digit of the number

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

		printf("First digit of number is: ");
		printf("%d\n",num);
		printf("Last digit of the number= %d\n",lastDigit);
		printf("\n\n");
}
		
