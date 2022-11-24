//call by address
//passing each elememt of multidimensional array one by one to the fun

int printf(const char*,...);
int scanf(const char*,...);

int mult=1;

//FUNCTION 
void fun(int *a){//pointer to take address
		
	mult *= (*a);
} 




void main(){
	
	int arr[10][10],row,col;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	
	printf("Enter number of columns: ");
	scanf("%d",&col);

//take elements	

	for(int olc=0; olc<row ; olc++){
		
		for(int ilc=0; ilc<col ; ilc++)

			scanf("%d",&arr[olc][ilc]);
	}

	for(int olc=0; olc<row ; olc++){

		for(int ilc=0; ilc<col ; ilc++){
		
	//passign every element to the function	 by address
			fun( &arr[olc][ilc]);
	}
	}

	printf("Multiplication is: %d\n",mult);
}
