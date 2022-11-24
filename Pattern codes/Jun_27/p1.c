#include<stdio.h>

void main(){
	int row;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	int var=row-1;	
	for(int olc=0 ; olc<=row-1; olc++){
		for(int ilc=0 ; ilc<=var; ilc++){
	
			if(olc+ilc == row-1 || ilc==var){
				printf(" %c ",olc+65);
			}
			else
				printf("   ");
		}
		var++;
		printf("\n");
	}
}
