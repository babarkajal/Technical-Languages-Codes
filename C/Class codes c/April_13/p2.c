//Find maximum elements from the 2-D array

#include<stdio.h>

void main(){
	int a[3][3],max,row,col;
	max=-1;

	printf("Enter elements in the array(+ve numbers): \n");
	
	for(int i=0; i<3; i++){
		
			for(int j=0; j<3; j++){

				scanf("%d",&a[i][j]);
				if(max < a[i][j]){
					max=a[i][j];
					row=i,col=j;
				}
			}
	}
	//print
	printf("\nMaximum number from the array: %d at the position \n row=%d,col= %d \n\n",max,row,col);
			
}
	
