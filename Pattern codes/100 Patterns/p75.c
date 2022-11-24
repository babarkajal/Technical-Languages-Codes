int printf(const char*,...);
int scanf(const char*,...);

void main(){
		
		int n,var;
		printf("Enter number of rows: ");
		scanf("%d",&n);
		
		int middle=n/2;
		var=middle+1;//for end portion
		int num=1;
		
		for(int i=1 ;i<=n ;i++)	{
				for(int j=1; j<=var ; j++){
					
					
					if(i <= middle+1){
						if(i+j >(middle+1) && (i+j)%2 != 0)
							printf(" * ");
						else
							printf("   ");
					}
					
					else{
						 
						if(j>num && (i+j)%2 !=0 )
							printf(" * ");
					else
							printf("   ");
					}

				}
				
				if(i< middle+1)
					var++;
				else{
					var--;
				}	

				if(i>middle+1)
					num++;
				
				printf("\n");
					
		
	}
}
