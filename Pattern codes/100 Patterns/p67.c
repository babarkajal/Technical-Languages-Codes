int printf(const char*,...);
int scanf(const char*,...);

void main(){
		
		int n,var;
		printf("Enter number of rows: ");
		scanf("%d",&n);
		

		var=n;//for end portion
		
		//for char print
		char ch='A';

		for(int i=1 ;i<=n ;i++,ch++)	{
				for(int j=1; j<=var ; j++){
					
					//For even number of rows	
					if(n%2 == 0){
						if(i+j>=(n+1) && (i+j)%2 != 0)
							printf(" %c ",ch);
						else
							printf("   ");
					}
					
					//For odd number of rows
					if(n%2 != 0){
						 if((i+j) >= (n+1) && (i+j)%2 == 0)
							printf(" %c ",ch);
					
					else
							printf("   ");
				}
				}
				var++;
				printf("\n");
		}			
		
}
