#include<stdio.h>

void main(){
		int n;
		printf("Size of array: ");
		scanf("%d",&n);
		
		//Test case: 1
		while(n < 0){	
			printf("\nInvalide size(please enter positive integers for size).\n");
			printf("Size of array: ");
			scanf("%d",&n);
		}


		char carr[n];
				
		printf("Enter the %d characters: ",n);
		for(int i=0; i<n ;i++)
				scanf(" %c",&carr[i]);
		

		//Test case 0:converting to small letters
		for(int i=0;i<n;i++){
					if(carr[i]>=65 && carr[i]<=90)
						carr[i] +=32;
		}


		//sorting array	
		char temp;
		for(int i=0;i<n;i++){
				for(int j=1;j<n ;j++){
						
						if(carr[j-1] > carr[j]){
								temp=carr[j-1];
								carr[j-1]=carr[j];
								carr[j]=temp;
						}
				}
		}

		//printing sorted array
		for(int i=0;i<n;i++)
					printf("%c",carr[i]);
		

			printf("\n");
		
}
