int printf(const char*,...);
int scanf(const char*,...);

//Function declaration
void arithmeticOperation();
void evenNo();
void oddNo();
void fibonacciSeries();
void areaCircle();
void calender(int,int,int);
void ascending(int*,int);


void p1(){
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
//-------------------------------------------------------------------------------------------------------------------------------------

void p2(){
		printf("\nTo find even and odd numbers from 1 to 10\n\n");
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
//-------------------------------------------------------------------------------------------------------------------------------------
void p3(){
		printf("\nTo find fibonacci series\n\n");
		int ch;
		char ans;
		
		//declaration of function pointer 
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

//-------------------------------------------------------------------------------------------------------------------------------------

void p4(void ){

		
		//Function pointer		
		void (*ptr) ();
		//Pointing to the areaCircle() fun
		ptr=areaCircle;
		//function call using pointer
		ptr();
}

//-------------------------------------------------------------------------------------------------------------------------------------
void p5(){
	int a[5];
	int *ptr=a;
	printf("\nIn main\n");
	printf("Enter elements: \n");

	for(int i=0 ;i<5 ;i++ ,ptr++){
		//insert using pointer	
		scanf("%d", ptr);
	}

	//function pointer
	void (*funPtr)(int*,int*);
	funPtr=ascending;
	//call to fun
	funPtr(a,a);
}

//-------------------------------------------------------------------------------------------------------------------------------------
void p6(){
	
	printf("\nTo find whether the date is valid or not.\n");	
	int year,month,date;

	printf("\nEnter the date(date/month/year):  ");
	int i=scanf("%d/%d/%d",&date,&month,&year);
	while(i!=3){
		
		printf("\n!!!Invalid date entered.Try again!!!\n");
		printf("\nEnter the date(date/month/year):  ");
		i=scanf("%d/%d/%d",&date,&month,&year);
	}
	
	//fun pointer
	void (*funPtr)(int ,int ,int)=calender;
	//call fun
	funPtr(date,month,year);
}
//-------------------------------------------------------------------------------------------------------------------------------------
