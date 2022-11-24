int printf(const char*,...);
int scanf(const char*,...);


void main(){
		int j,a,n;//'j' for starting and 'a' for end 
		
		//var for char printing 
		char var='A';

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
				//again set to 'A' for new row
				var='A';
				i=0;
				continue;
			}
			//print number
			if(i > j)		
				printf(" %c ",var++);
			
			else
				printf("   ");
		}
		printf("\n");
}
