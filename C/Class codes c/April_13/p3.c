//Sum of digonal elemnts of the 2-D array

#include<stdio.h>

void main(){
	int a[3][3],sum=0;
	

	printf("Enter elements in the array: \n");
	
	for(int i=0; i<3; i++){
		
			for(int j=0; j<3; j++){

				scanf("%d",&a[i][j]);
				if(i==j){
					sum=sum+a[i][j];
				}
			}
	}
	//print
	printf("\nElemnts are: \n");
	for(int i=0; i<3; i++){
		
			for(int j=0; j<3; j++){
				printf("%d\t",a[i][j]);
			}
		printf("\n");
	}

	printf("\nSum of digonal elements: %d\n\n",sum);	
}
	
