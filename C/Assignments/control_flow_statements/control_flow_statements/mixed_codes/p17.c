int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int count=0;
	
		for(int i=1 ; i<=num ; i++){

			   if ( num%i==0)
				count++;	
			
			  
		}
		if(count==2)
			printf("%d is a prime number!\n\n",num);
		else
			printf("%d is not prime number!\n\n",num);
		
}
