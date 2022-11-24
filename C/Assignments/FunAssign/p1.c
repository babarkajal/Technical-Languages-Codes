int printf(const char*,...);
int scanf(const char*,...);

void arithmeticOperation(int a,int b){
			
			printf("Addition = %d\n",a+b);
			printf("Substraction = %d\n",a-b);
			printf("Multiplication = %d\n",a*b);
			printf("Division = %d\n",a/b);
}




void main(){
		printf("\nTo perform arithmetic operation\n");
		int ch;
		char ans;
		
		//declaration of function pointer points to the arithmetucoperation fun
		void (*ptr)(int,int)=arithmeticOperation;

		do{
			printf("\n1.Function call using designator(name).\n2.Call using pointer\n");
			printf("\nEnter your choice: ");
			scanf("%d",&ch);

			switch(ch){
			
				case 1:
					//call using name 
					arithmeticOperation(10,20);
					break;
				case 2:
					//call using pointer
					ptr(10,20);
					break;
				}
			printf("\nDo you want to continue: ");
			scanf(" %c",&ans);
		}while(ans=='y');
	
}

