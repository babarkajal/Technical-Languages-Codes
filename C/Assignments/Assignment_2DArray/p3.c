//Take 2D array from user &  print it.Take row and column from user.Perfrom addition of corner elements


int printf(const char*,...);
int scanf(const char*,...);

void main(){
	
	int sum=0;
	int row,col;
	int arr[10][10];
	printf("Enter the row: ");
	scanf("%d",&row);
	printf("Enter the column: ");
	scanf("%d",&col);

	//take array from user
	printf("Enter elements of array: ");
	for(int olc=0; olc<row ; olc++){
		
		for(int ilc=0; ilc<col ; ilc++){
			
			scanf("%d",&arr[olc][ilc]);

			//to perform addition
			if(olc==0 || olc==row-1){
				if(ilc==0 || ilc==col-1)
					sum +=arr[olc][ilc];
			}
		}
	}

	//print array
	printf("\nArray elemnets:\n");
	for(int olc=0; olc<row ; olc++){
		
		for(int ilc=0; ilc<col ; ilc++)
			printf("%d ",arr[olc][ilc]);
	
	printf("\n");
	}
	
	printf("\nSum of corner elements: %d\n",sum);

	


}
