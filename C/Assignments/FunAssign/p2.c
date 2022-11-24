int printf(const char*,...);
int scanf(const char*,...);

//odd number function
void oddNo(){
	printf("\nOdd Numbers upto 20\n");	
	
	for(int i=1; i<=20; i=i+2){

			printf("%d\t",i);		
	}
}

//Even number function
void evenNo(){
	printf("\nEven Numbers upto 20\n");	
	
	for(int i=0; i<=20; i=i+2){

			printf("%d\t",i);		
	}
}


//main
void main(){
		
		int ch;
		char ans;
		
		//declaration of function pointer 

		//fun pointer to evenNo() 
		void (*ptr1)()=evenNo;

		
		//fun pointer to oddNo() 
		void (*ptr2)()=oddNo;

		do{
		      printf("\n1.Function call using designator(name).\n2.Call using pointer\n3.Call using dereferncing the pointer");
			printf("\n\nEnter your choice: ");
			scanf("%d",&ch);

			switch(ch){
			
				case 1:
					//call using name 
					evenNo();
					oddNo();
					break;

				case 2:
					//call using pointer
					ptr1();
					ptr2();
					break;
				case 3:
					
					//call using dereferncing pointer
					(*ptr1)();
					(*ptr2)();
					break;
				}
			printf("\nDo you want to continue: ");
			scanf(" %c",&ans);
		}while(ans=='y');
	
}

