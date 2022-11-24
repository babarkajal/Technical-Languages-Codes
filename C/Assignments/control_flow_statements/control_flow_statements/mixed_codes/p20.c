int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int num1,num2;
		printf("Enter two number: ");
		scanf("%d %d",&num1,&num2);
		int sum=0;
		int mul=1;

		printf("----------Addition of even and multiplication of odd numbers ranging from %d to %d-----------\n\n",num1,num2);
		for(int i=num1 ; i<=num2 ; i++){

			   if(i % 2==0)
		                   sum = sum+i;//addition o even
			  else
				   mul=mul*i;
 		}
			printf("Addition of even numbers:  %d.\n\n",sum);

			printf("multiplication of odd numbers: %d.\n\n",mul);
		
}
