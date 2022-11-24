//Take two 2D array from user &  print it. Perfrom addition of two arrays and store it into third array


int printf(const char*,...);
int scanf(const char*,...);

void main(){

	int arr1[3][3], arr2[3][3],sum[3][3];
	
	printf("Enter 9 elements of array1: \n");
	for(int olc=0; olc<3 ; olc++){
		
		for(int ilc=0; ilc<3 ; ilc++){
		
			scanf("%d",&arr1[olc][ilc]);

			sum[olc][ilc]=arr1[olc][ilc] + arr2[olc][ilc];
		}
	}

	printf("Enter 9 elements of array2: \n");
	for(int olc=0; olc<3 ; olc++){
		
		for(int ilc=0; ilc<3 ; ilc++){
			scanf("%d",&arr2[olc][ilc]);
			sum[olc][ilc]=arr1[olc][ilc] + arr2[olc][ilc];
		}
	}


	printf("\nAddition:\n");
	for(int olc=0; olc<3 ; olc++){
		
		printf(" | ");

		for(int ilc=0; ilc < 3 ; ilc++)
			printf(" %d ",arr1[olc][ilc]);
		
		printf("|  +  |");

		for(int ilc=0; ilc<3 ; ilc++)
			printf(" %d ",arr2[olc][ilc]);

		printf("|  =  |");
		
		for(int ilc=0; ilc<3;ilc++)
			printf(" %d ",sum[olc][ilc]);

		printf("|\n");
	}

}
