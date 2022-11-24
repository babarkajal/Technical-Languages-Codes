int printf(const char*,...);
int scanf(const char*,...);


void main(){
		int j,a,n;//'j' for starting and 'a' for end 
		
		
		printf("Enter the number of rows for pattern: ");
		scanf("%d",&n);

		//for start the * 
		j=n-1;

		//to end the row
		a=n+1;
		
		//var to print number dec upto middle and then inc order
		int var= n-1;

		//first condition for end the row and second for end the entire pattern
		for(int i=1; i<=a && i < 2*n ; i++){
			
			if(i==a){
				printf("\n");
				a++;
				j--;
				i=0;
				//again assign for next row calculations
				var= n-1;
				continue;
			}

			if(i > j)		
				printf(" %d ",var);
			
			else 
				printf("   ");
			
			if(i<n)
				--var;
			else
				++var;
			
		}	
			printf("\n");
		
}
