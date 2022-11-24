int printf(const char*,...);
int scanf(const char*,...);

void main(){
	
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	int j=n;//To stop 
	
	char a='A';//to print character

	for(int i=1; i<=n ; i++){
		if(i<=j)
		{
			printf("%c ",a);
			
		}
//print next line and reset the i
		if(i==j){
			a++;
			i=0;
			j--;
			printf("\n");
		}	
		
	}
		
}

			
				
				
