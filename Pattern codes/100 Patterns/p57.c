int printf(const char*,...);
int scanf(const char*,...);


void main(){
		
		int var=2,n;
		

		do{
			printf("Enter number of rows: \n");
			scanf("%d",&n);
			if(n%2==0)
				printf("\nEnter only odd value\n");
		}while(n%2 == 0);
		
		//calculate middle
		int middle=n/2;
	
	 
		//to print the character
		char a =middle + 65; 	//ADD Ascii number of A into the middle term 
	
		for(int i=1; i<=n ; i++){
			
				for(int j=1; j< var; j++){
							
						printf("%c ",a);
						a--;	
				}
			 		
			a =middle + 65; 	//ADD Ascii number of A into the middle term 
			if(i < middle+1)
                       		var++;
                 	else
                      		var--;
		
			printf("\n");
		}
}
