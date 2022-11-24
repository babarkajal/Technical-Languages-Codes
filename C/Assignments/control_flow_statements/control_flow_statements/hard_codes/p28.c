#include<stdio.h>

void main(){
		int div,num,reversedNumber;
		int mod;
		printf("Enter the number(above 100): ");
		scanf("%d",&num);
		for(int i=101;i<=num;i++){
			reversedNumber=0;
			div=i;
			while(div!=0){
				mod= div %10;
				reversedNumber = reversedNumber*10 + mod;
				div=div/10;
		      	}
			if(i==reversedNumber){
				
				printf("%d\n",reversedNumber);
		        }
		}
}
