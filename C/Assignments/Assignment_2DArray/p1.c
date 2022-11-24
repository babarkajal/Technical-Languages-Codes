//Take 2D array from user &  print it.Take row and column from user.


int printf(const char*,...);
int scanf(const char*,...);

void main(){
	
	int row,col;
	int arr[10][10];
	printf("Enter the row: ");
	scanf("%d",&row);
	printf("Enter the column: ");
	scanf("%d",&col);

	
	printf("Enter elements of array: ");
	for(int olc=0; olc<row ; olc++){
		
		for(int ilc=0; ilc<col ; ilc++)
		scanf("%d",&arr[olc][ilc]);
	}

	printf("\nArray elemnets:\n");
	for(int olc=0; olc<row ; olc++){
		
		for(int ilc=0; ilc<col ; ilc++)
			printf("%d ",arr[olc][ilc]);
	
	printf("\n");
	}

}
