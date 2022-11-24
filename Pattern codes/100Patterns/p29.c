int printf(const  char*,...);
int scanf(const  char*,...);



void main(){
		int n;
		printf("Enter number of rows : ");
		scanf("%d",&n);

		int j=0;
		for(int i=1; i<=n; i++){
				
			if(i > j)
				printf(" * ");
			else
				printf("   ");
			
			if(i==n && j < n-1){
				printf("\n");
				i=0;
				j++;
			}
		}
		printf("\n");
	
}
						
