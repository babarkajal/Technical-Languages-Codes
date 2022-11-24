int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int sumDiv=0;

		for(int i=1 ; i<num ; i++){

			   if(num % i==0)
		                   sumDiv = sumDiv + i;//addition of divisors
		}

		if(sumDiv==num)//sum of divisor==num ->perfect number
			printf("%d is perfect number\n\n",num);

		else
			printf("%d is not perfect number\n\n",num);
		
}
