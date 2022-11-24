int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		int count;
		printf("-------------------*List of prime numbers from 1 to %d*-----------------------\n",num);
		for(int i=1 ; i <= num ; i++){
			
			count=0;
			for(int j=1;j<=num;j++){
					
					 if(i%j==0)
						count++;//if i divisible by j then count =count+1
					 
			}
			if(count==2)
				printf("%d ",i);
						
			   		 
		}

		printf("\n");
		
}
