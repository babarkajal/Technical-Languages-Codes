int printf(const char*,...);
int scanf(const char*,...);


void main(){
		int j,a,n;//'j' for starting and 'a' for end 

		printf("Enter the number of rows for pattern: ");
		scanf("%d",&n);

		//for start the * 
		j= 0;

		//to end the row
		a= 2*n;
		
		//var to print char.set to the odd char according to row.
		//ex: row=4 then var=G 
		
		char var= 'A'+ (n+(n-2));
		//suppose row=5 then var= 65 +(5+3)= 73='I'
			

		//first condition for end the row and second for end the entire pattern
		for(int i=1; i<=a && a >= n+1 ; i++){
			
			if(i==a){
				printf("\n");
				a--;
				j++;
				i=0;
				//dec by 2 to skip one letter
				var = var-2;
				continue;
			}	
			if(i > j)		
				printf(" %c ",var);
			else
				printf("   ");
		}
	
}
