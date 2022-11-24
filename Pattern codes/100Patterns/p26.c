int printf(const  char*,...);
int scanf(const  char*,...);



void main(){
		int n;
		printf("Enter number of rows : ");
		scanf("%d",&n);

		int j=n-1,a=1;
		for(int i=1; i<=n; i++){
				
			if(i > j)
				printf(" %d ",a++);
			else
				printf("   ");
			
			if(i==n && j!=0){
				printf("\n");
				i=0;
				j--;
				a=1;
				
			}
		}
		printf("\n");
}
						
