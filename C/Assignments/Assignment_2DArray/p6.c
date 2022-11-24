//Take two 2D array from user &  print it. Perfrom addition of two arrays and store it into third array


int printf(const char*,...);
int scanf(const char*,...);

void main(){

	int arr[3][3],flag=0;
	
	printf("Enter 9 elements of array: \n");
	for(int olc=0; olc<3 ; olc++){
		
		for(int ilc=0; ilc<3 ; ilc++){
		
			scanf("%d",&arr[olc][ilc]);
			
			if((olc==ilc && arr[olc][ilc]==1) || arr[olc][ilc]==0)
					flag++;
	
		}
	}

//To print
	 printf("\nArray elemnets:\n");
        for(int olc=0; olc<3 ; olc++){

                for(int ilc=0; ilc<3 ; ilc++)
                        printf("%d ",arr[olc][ilc]);

        printf("\n");

	}
	
	if(flag==9)
		printf("\nEntered Array is an Identity matrix.\n");
	else
		printf("\nEntered Array is not an Identity matrix.\n");
	
	

}
