//2-D array

#include<stdio.h>

void main(){
	int a[3][3];
	printf("Enter elements in the array: \n");
	
	for(int i=0; i<3; i++){
		
			for(int j=0; j<3; j++){
				scanf("%d",&a[i][j]);
			}
	}
	//print
	printf("\nElements in the array: \n");
	for(int i=0; i<3; i++){
		
			for(int j=0; j<3; j++){
				printf("%d\t",a[i][j]);
			}
		printf("\n");
	}
}
	
