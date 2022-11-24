int printf(const char*,...);
int scanf(const char*,...);


void main(){
		int j,a,n,var=1;//'j' for starting and 'a' for end 
		//var for number printing 
		printf("Enter the number of rows for pattern: ");
		scanf("%d",&n);

		//For starting of number printing 
		j=n-1;

		//for end 
		a=n+1;

		for(int i=1; i<=a && i < 2*n ; i++){
		
			//For next row printing
			if(i==a){
				printf("\n");
				a++;
				j--;
				var=1;
				i=0;
				continue;
			}
			//print number
			if(i > j)		
				printf(" %d ",var++);
			
			else
				printf("   ");
		}
		printf("\n");
}
