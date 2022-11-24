int printf(const char*,...);
int scanf(const char*,...);

void main(){
	int j=2,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		
		if(i<j)
		{
			printf("* ");
			
		}
		else{
			i=0;
			j++;
			printf("\n");
		}	
		
	}
		
printf("\n");	
}

			
				
				
