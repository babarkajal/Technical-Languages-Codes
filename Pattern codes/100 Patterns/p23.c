int printf(const char*,...);
int scanf(const char*,...);

void main(){
	
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	int j=n;	
	
	char a='E';//To print characters

	for(int i=1; i<=n ; i++,a--){
		if(i<=j)
		{
			printf("%c ",a);
			
		}
		if(i==j){
			
			a=70;
			i=0;
			j--;
			printf("\n");
		}	
		
	}
		
}

			
				
				
