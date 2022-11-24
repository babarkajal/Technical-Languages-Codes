int printf(const char*,...);
int scanf(const char*,...);


void main(){
		int j,a,n,var=1;//'j' for starting and 'a' for end 
		//var for number printing 
		printf("Enter the number of rows for pattern: ");
		scanf("%d",&n);

		j=n-1;
		a=n+1;
		for(int i=1; i<=a && i < 2*n ; i++){
			
			if(i==a){
				printf("\n");
				a++;
				j--;
				var +=2;
				i=0;
				continue;
			}	
			if(i > j)		
				printf(" %d ",var);
			else
				printf("   ");
		}
		printf("\n");
}
