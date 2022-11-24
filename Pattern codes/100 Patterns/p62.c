int printf(const char* ,...);
int scanf(const char* ,...);


void main(){

		int var,n;
		int middle;

		//accept only odd values
		do{
			printf("\nEnter number of rows(odd numbers only): ");
			scanf("%d",&n);
		}while(n%2==0);
		
	
		middle=n/2;
		var=middle; //for space
		char ch = 'A';//for char printing
 
		for(int i=1; i<=n ;i++){
			
				for(int j=1; j<=(middle+1); j++,ch++){
					
						if(j > var)
							printf(" %c ",ch);
						else
							printf("   ");
				}
			ch = 'A';//again reset to starting A
			if(i < middle+1)
				var--;
			else
 				var++;

			printf("\n");//for new line
		}
}
