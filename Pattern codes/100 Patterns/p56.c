int printf(const char*,...);
int scanf(const char*,...);


void main(){
		
		int var=2,n;
		int arr[4]={0,1,2,3};

		do{
			printf("Enter number of rows: ");
			scanf("%d",&n);
			if(n%2==0)
				printf("\nEnter only odd value\n");
		}while(n%2 == 0);
		
		//calculate middle
		int middle=n/2;
		
		//var to print number
		int a=middle;

		for(int i=1; i<=n ; i++){

				
				for(int j=1; j< var; j++){
						
						printf("%d ",arr[]);
						//inc by one
						 a++;
						
				}
			
 	
			if(i < middle+1){
                       		var++;
				a=a-(i+1);
				
			}	
                 	else{
                      		var--;
				a = a-(i-1);
			}
			printf("\n");
		}
}
