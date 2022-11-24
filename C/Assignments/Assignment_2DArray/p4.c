//Take 2D array from user &  print it.Take row and column from user.Perfrom addition of corner elements


int printf(const char*,...);
int scanf(const char*,...);

void main(){
	
	int mult=1;
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

			//to perform multiplication
			if(olc==ilc){
				mult *=arr[olc][ilc];
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
	
	printf("\nMultiplication of diagonal elements: %d\n",mult);

	


}
