int printf(const char*,...);
int scanf(const char*,...);



//p1
void arithmeticOperation(int a,int b){
			
			printf("Addition = %d\n",a+b);
			printf("Substraction = %d\n",a-b);
			printf("Multiplication = %d\n",a*b);
			printf("Division = %d\n",a/b);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------
//p2 
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

//-------------------------------------------------------------------------------------------------------------------------------------------------
//p3
void fibonacciSeries(){
			
		printf("\n");
		int i,sum=0;
		int arr[10];

		for(int j=0 ;j < 10 ;j++){
			
				if(j==0 || j==1){ 
					printf("%d\t",j);
					arr[j]=j;
					
				}
				
				else {
					arr[j]=arr[j-1]+arr[j-2];
					
					printf("%d\t",arr[j]);
				}	
					
		}
}
//-------------------------------------------------------------------------------------------------------------------------------------------------
//p4
void areaCircle(){

		printf("\nTo calculate area of a circle\n");
		int r;
		printf("Enter the radius of the circle: ");
		scanf("%d",&r);
		printf("Area of a circle: %f \n",(3.14* r * r) );
}
//-------------------------------------------------------------------------------------------------------------------------------------------------
//p5
void ascending(int *ptr,int a[5]){
		
		printf("In function\n");
		printf("After sorting\n");	
		
	
		//SORTING

		int temp;	//for swaping 	
		for(int i=1; i<5 ; i++){
			
			//increment for pointing to the second pos
			ptr++;

			for(int j=1 ; j<5 ;j++){
				
				//if previous element is large then swap
				if( *(ptr-1) > *ptr ){
					
					temp = *(ptr-1);
					*(ptr-1) = *ptr;
					*(ptr) = temp;
				}
			
				ptr++;	//to point next location
			}
		//for pointing again to the first
		ptr=a;
		 
		}

		//display array content
		ptr=a;
		for(int i=0 ;i<5; i++){
			printf("%d ",*(ptr+i) );		

		}
	printf("\n");
}


//-------------------------------------------------------------------------------------------------------------------------------------------------
//p6
void calender(int date,int month, int year ){
			
		int flag=0;
		if(month<=12){
			//For the month which having 31 days
			if( (month %2 !=0 || month==8) && (date <=31) )
							//set flag
							flag=1;

			//For the month Feb (leap year and non leap year)
			else if(month==2 && (date<=29 && year%4==0)  ||  (date<=28 && year%4!=0 )){

						flag=1;
			}
			
			//for the month having 30 days
			else if( (month%2==0 && date<=30) && month!=2)		
						flag=1;		
		}
		else
			printf("\nInvalid month\n");
			
		//flags set for valid
			if(flag==1)
				printf("\nDate is valid!!!!!\n\n");
			else
				printf("\nDate is not valid!!!!!\n\n");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------
