int printf(const char*,...);
int scanf(const char*,...);

void fibonacciSeries(){
			
		printf("\n");
		int i,sum=0;
		int a[10];

		for(int j=0 ;j < 10 ;j++){
			
				if(j==0 || j==1){ 
					printf("%d\t",j);
					a[j]=j;
					
				}
				
				else {
					a[j]=a[j-1]+a[j-2];
					
					printf("%d\t",a[j]);
				}	
					
		}
}




void main(){
		
		int ch;
		char ans;
		
		//declaration of function pointer points to the arithmetucoperation fun
		void (*ptr)()= fibonacciSeries;
		printf("\n----------------------To find fibonacci series upto 10.------------------------------\n ");
		do{
			printf("\n1.Function call using designator(name).\n2.Call using pointer\n3.call by dereferncing the pointer\n");
			printf("\nEnter your choice: ");
			scanf("%d",&ch);

			switch(ch){
			
				case 1:
					//call using name 
					fibonacciSeries();
					break;
				case 2:
					//call using pointer
					ptr();
					break;
				case 3:
					//call using dereferncing
					(*ptr)();
				}
			printf("\nDo you want to continue: ");
			scanf(" %c",&ans);
		}while(ans=='y');
	
}

