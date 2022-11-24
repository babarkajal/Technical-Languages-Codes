int printf(const char*,...);
int scanf(const char*,...);


void main(){
		
		int var=2,n;
		

		do{
			printf("Enter number of rows: ");
			scanf("%d",&n);
			if(n%2==0)
				printf("\nEnter only odd value\n");
		}while(n%2 == 0);
		
		//calculate middle
		int middle=n/2;
		
		//var to print number
		int a= middle;

		for(int i=1; i<=n ; i++){
			
				for(int j=1; j< var; j++){
							
						printf("%d ",a);
						//dec by one 
						a--;
				}
			
 			a=middle;
			if(i < middle+1)
                       		var++;
                 	else
                      		var--;
		
			printf("\n");
		}
}
