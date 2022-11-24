int printf(const char*,...);
int scanf(const char*,...);

void main(){
	
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	int j=n;

	for(int i=1; i<=n ;i++){
		if(i<=j)
		{
			printf("%d ",i);
			
		}
		if(i==j){
			i=0;
			j--;
			printf("\n");
		}	
		
	}
		
}

			
				
				
