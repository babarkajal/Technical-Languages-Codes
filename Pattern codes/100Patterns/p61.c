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
		int num = 0;//for number printing
 
		for(int i=1; i<=n ;i++){
			
				for(int j=1; j<=(middle+1); j++,num++){
					
						if(j > var)
							printf(" %d ",num);
						else
							printf("   ");
				}
			num = 0;//again reset to starting number
			if(i < middle+1)
				var--;
			else
 				var++;

			printf("\n");//for new line
		}
}
