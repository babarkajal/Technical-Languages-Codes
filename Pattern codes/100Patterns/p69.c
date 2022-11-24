int printf(const char*,...);
int scanf(const char*,...);

void main(){
		
		int n,var;
		printf("Enter number of rows: ");
		scanf("%d",&n);
		

		var=2*n;//for end portion
		
		for(int i=1 ;i<=n ;i++)	{
				for(int j=1; j<var ; j++){
					
					if(j >= i && (i+j)%2==0 )	
						printf(" * ");			
					else
							printf("   ");
				}
				
				var--;
				printf("\n");
		}			
		
}
