 #include<stdio.h>

//Array
//int a[5];

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

void main(){
	int a[5];	
	int *ptr=a;
	printf("\nIn main\n");
	printf("Enter elements: \n");

	for(int i=0 ;i<5 ;i++ ,ptr++){
		//insert using pointer	
		scanf("%d", ptr);
	}

	//function pointer
	void (*funPtr)(int*,int )=ascending;
	//call to fun
	funPtr(a,a);
}
		
		
